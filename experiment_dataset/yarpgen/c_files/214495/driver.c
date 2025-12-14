#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6985503046996747988LL;
long long int var_2 = 6170319036420385000LL;
unsigned int var_5 = 3404651786U;
unsigned short var_6 = (unsigned short)7318;
int var_13 = -1177485741;
signed char var_16 = (signed char)-34;
int zero = 0;
unsigned int var_18 = 1461198122U;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-48;
short var_21 = (short)9004;
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
