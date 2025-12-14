#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3864955699U;
unsigned char var_3 = (unsigned char)16;
signed char var_6 = (signed char)-81;
short var_11 = (short)-9087;
_Bool var_12 = (_Bool)1;
int var_13 = 1196198567;
unsigned int var_15 = 3331973961U;
unsigned char var_16 = (unsigned char)123;
int zero = 0;
unsigned int var_17 = 4041632637U;
_Bool var_18 = (_Bool)0;
int var_19 = 129383883;
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
