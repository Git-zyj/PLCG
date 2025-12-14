#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 7734265947654365337LL;
int var_2 = -871768747;
_Bool var_3 = (_Bool)0;
long long int var_5 = -6490419947124028685LL;
unsigned short var_6 = (unsigned short)28443;
_Bool var_8 = (_Bool)1;
signed char var_11 = (signed char)35;
int zero = 0;
short var_12 = (short)-3161;
signed char var_13 = (signed char)-122;
unsigned long long int var_14 = 4545920415977208755ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
