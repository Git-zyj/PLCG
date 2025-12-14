#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6687894173764264305LL;
unsigned long long int var_3 = 14523839877694234977ULL;
short var_7 = (short)22864;
int var_8 = 1353123913;
signed char var_11 = (signed char)28;
int zero = 0;
int var_13 = -1185607460;
unsigned long long int var_14 = 16613820683495741768ULL;
long long int var_15 = -6278943017701978341LL;
unsigned long long int var_16 = 18260185881258844289ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
