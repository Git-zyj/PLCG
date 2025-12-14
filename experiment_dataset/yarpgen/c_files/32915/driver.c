#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1749571972039713748LL;
long long int var_2 = 2906739313515410676LL;
unsigned long long int var_3 = 16786077081270656326ULL;
int var_4 = 2096165456;
unsigned int var_8 = 2593177468U;
_Bool var_13 = (_Bool)1;
unsigned short var_14 = (unsigned short)31064;
int zero = 0;
long long int var_18 = -4308799804193044350LL;
unsigned long long int var_19 = 8227140261381155144ULL;
unsigned short var_20 = (unsigned short)42646;
void init() {
}

void checksum() {
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
