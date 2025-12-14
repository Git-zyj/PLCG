#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 184552992U;
unsigned long long int var_4 = 10371697533968500190ULL;
signed char var_6 = (signed char)-118;
int var_9 = 1347667082;
short var_11 = (short)19779;
unsigned long long int var_16 = 17127798343050823914ULL;
int zero = 0;
unsigned int var_17 = 4110187385U;
int var_18 = -1347740459;
signed char var_19 = (signed char)64;
unsigned short var_20 = (unsigned short)53608;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
