#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3146668346U;
long long int var_4 = -2012075407368365285LL;
long long int var_5 = 5872769861957977042LL;
unsigned long long int var_6 = 9622953490662493056ULL;
int var_8 = -1242772269;
long long int var_10 = 44675005042252268LL;
int zero = 0;
signed char var_11 = (signed char)-117;
unsigned char var_12 = (unsigned char)88;
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
