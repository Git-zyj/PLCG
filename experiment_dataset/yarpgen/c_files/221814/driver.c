#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-29;
int var_10 = 647511820;
int var_11 = -650822682;
long long int var_12 = 1314965838527236883LL;
long long int var_15 = 3250979714536034222LL;
int zero = 0;
long long int var_17 = -7336727961244923134LL;
unsigned short var_18 = (unsigned short)27314;
int var_19 = -1410081072;
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
