#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)214;
unsigned long long int var_5 = 9820266911615204033ULL;
unsigned int var_6 = 4101040951U;
int zero = 0;
unsigned long long int var_11 = 11044043584683368406ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)5563;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
