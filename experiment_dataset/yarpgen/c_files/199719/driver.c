#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)106;
int var_2 = 622440951;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int var_10 = -1625641004;
unsigned long long int var_11 = 514909256174674614ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)138;
unsigned long long int var_14 = 847045287843418619ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
