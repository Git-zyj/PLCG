#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14306411041057256781ULL;
short var_6 = (short)1109;
unsigned long long int var_13 = 12950968800521326167ULL;
_Bool var_14 = (_Bool)1;
short var_17 = (short)-21730;
int zero = 0;
unsigned long long int var_18 = 11911171811557214969ULL;
unsigned long long int var_19 = 2049040055509142024ULL;
long long int var_20 = 1062298648954963676LL;
short var_21 = (short)-7362;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
