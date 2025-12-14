#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8939591901901735724LL;
long long int var_5 = 3345503370750314085LL;
unsigned char var_9 = (unsigned char)120;
unsigned long long int var_11 = 1952781703450642496ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)236;
short var_13 = (short)-17228;
long long int var_14 = 5749151184228895940LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
