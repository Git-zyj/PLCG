#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -9116171382858629642LL;
short var_3 = (short)-25350;
signed char var_5 = (signed char)-4;
unsigned long long int var_9 = 1614703161817079124ULL;
unsigned short var_11 = (unsigned short)18580;
signed char var_13 = (signed char)-113;
int zero = 0;
unsigned long long int var_16 = 13442033452525102737ULL;
unsigned int var_17 = 2170110914U;
int var_18 = -1897450015;
signed char var_19 = (signed char)-72;
int var_20 = -1290357427;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
