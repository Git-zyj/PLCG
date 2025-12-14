#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)25;
long long int var_10 = 9003694142949771820LL;
long long int var_11 = 4291448785574015640LL;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)198;
_Bool var_18 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
long long int var_21 = 756487545774596LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
