#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9052;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)33059;
signed char var_17 = (signed char)-71;
int zero = 0;
unsigned long long int var_18 = 4913646119195507162ULL;
unsigned long long int var_19 = 10368350727188278603ULL;
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
