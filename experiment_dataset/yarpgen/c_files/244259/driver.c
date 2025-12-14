#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12599076537494949159ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_5 = 2302437243U;
unsigned long long int var_11 = 14107924378206926303ULL;
signed char var_12 = (signed char)95;
unsigned long long int var_13 = 1076688892151394885ULL;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 704100686U;
signed char var_17 = (signed char)61;
int var_18 = 15241040;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
