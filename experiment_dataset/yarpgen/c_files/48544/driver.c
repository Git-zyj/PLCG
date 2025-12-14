#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 15611626391279219212ULL;
unsigned long long int var_6 = 15937452991655284004ULL;
int var_7 = 1612083380;
signed char var_8 = (signed char)67;
_Bool var_10 = (_Bool)0;
int var_11 = -291924444;
short var_15 = (short)12444;
int zero = 0;
unsigned int var_17 = 1382359601U;
short var_18 = (short)-11081;
short var_19 = (short)-27682;
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
