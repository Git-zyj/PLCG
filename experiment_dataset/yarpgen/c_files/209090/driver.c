#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 298531174;
int var_3 = -2039448551;
unsigned int var_6 = 1782871174U;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 1474201008054407013ULL;
int zero = 0;
short var_13 = (short)-5730;
signed char var_14 = (signed char)-72;
unsigned int var_15 = 300472663U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
