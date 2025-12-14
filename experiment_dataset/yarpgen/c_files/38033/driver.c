#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)169;
unsigned long long int var_2 = 1332164266476629602ULL;
signed char var_4 = (signed char)-14;
_Bool var_9 = (_Bool)0;
unsigned char var_11 = (unsigned char)210;
long long int var_15 = -4668946002562257906LL;
int zero = 0;
unsigned int var_17 = 850813399U;
unsigned int var_18 = 2886543492U;
unsigned char var_19 = (unsigned char)168;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
