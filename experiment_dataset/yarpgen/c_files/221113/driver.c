#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)11;
unsigned long long int var_1 = 6768926073801595244ULL;
unsigned char var_2 = (unsigned char)7;
unsigned char var_3 = (unsigned char)138;
signed char var_8 = (signed char)90;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 1332873443U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
