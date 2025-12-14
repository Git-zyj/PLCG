#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2895066328914534395LL;
unsigned long long int var_7 = 2595402602215375577ULL;
int var_11 = -1505100692;
unsigned short var_12 = (unsigned short)17559;
int var_13 = -1618765889;
int zero = 0;
signed char var_15 = (signed char)-110;
unsigned short var_16 = (unsigned short)57335;
long long int var_17 = -7897088451801872346LL;
unsigned long long int var_18 = 6560788732815659250ULL;
short var_19 = (short)1447;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
