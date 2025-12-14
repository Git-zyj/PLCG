#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -229178966;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 830666713333387478ULL;
unsigned long long int var_5 = 16273187418409863639ULL;
unsigned int var_7 = 2965755292U;
int zero = 0;
unsigned short var_20 = (unsigned short)54225;
int var_21 = -1593050691;
unsigned int var_22 = 936161307U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
