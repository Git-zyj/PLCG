#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11757271183496311580ULL;
unsigned int var_3 = 1216838800U;
_Bool var_4 = (_Bool)0;
int var_5 = -1830391987;
int zero = 0;
int var_11 = 692215785;
long long int var_12 = -1758800724282762885LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
