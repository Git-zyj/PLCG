#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 1611126939367034343ULL;
short var_4 = (short)-23002;
unsigned long long int var_7 = 17619715400179831834ULL;
int var_8 = 1995625505;
unsigned long long int var_9 = 14815487966148077762ULL;
long long int var_11 = 8404605976266477783LL;
short var_16 = (short)24300;
signed char var_17 = (signed char)-53;
_Bool var_18 = (_Bool)0;
int zero = 0;
long long int var_20 = -8573894842740607463LL;
signed char var_21 = (signed char)-31;
long long int var_22 = -6503553194169954696LL;
int var_23 = 344422302;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
