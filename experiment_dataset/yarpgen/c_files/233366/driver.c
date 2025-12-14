#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4207254351U;
unsigned long long int var_2 = 17666180565399012044ULL;
unsigned int var_4 = 1280722869U;
short var_8 = (short)24938;
_Bool var_9 = (_Bool)1;
short var_10 = (short)25887;
unsigned int var_11 = 1924179611U;
signed char var_12 = (signed char)27;
unsigned char var_13 = (unsigned char)240;
short var_17 = (short)-16477;
short var_18 = (short)1209;
int zero = 0;
signed char var_19 = (signed char)-33;
unsigned long long int var_20 = 12981661908658626913ULL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)110;
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
