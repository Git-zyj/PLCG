#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)20987;
int var_2 = 1244971588;
long long int var_3 = 2775608000032986383LL;
unsigned long long int var_4 = 14279762761057059441ULL;
unsigned short var_6 = (unsigned short)51665;
signed char var_10 = (signed char)-115;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int var_14 = 505543912;
int zero = 0;
unsigned short var_15 = (unsigned short)7051;
unsigned int var_16 = 489862323U;
long long int var_17 = -7124367666298729713LL;
signed char var_18 = (signed char)-74;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
