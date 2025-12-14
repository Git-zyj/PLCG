#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)119;
unsigned int var_6 = 470149492U;
unsigned int var_7 = 1843819499U;
signed char var_8 = (signed char)-114;
unsigned int var_10 = 1329668631U;
unsigned int var_13 = 1523616067U;
unsigned long long int var_15 = 17665934827320117724ULL;
unsigned int var_16 = 2027636352U;
signed char var_17 = (signed char)19;
unsigned int var_18 = 2659696892U;
int zero = 0;
signed char var_19 = (signed char)-98;
unsigned int var_20 = 1659748496U;
unsigned long long int var_21 = 3196089550933311719ULL;
unsigned int var_22 = 3839700249U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
