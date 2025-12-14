#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)17269;
unsigned long long int var_7 = 2331430397873579535ULL;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
short var_14 = (short)3243;
unsigned short var_15 = (unsigned short)61064;
int zero = 0;
unsigned short var_18 = (unsigned short)58885;
unsigned short var_19 = (unsigned short)43046;
void init() {
}

void checksum() {
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
