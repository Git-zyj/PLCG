#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15364496884897539732ULL;
_Bool var_1 = (_Bool)0;
unsigned char var_2 = (unsigned char)26;
unsigned short var_4 = (unsigned short)37849;
_Bool var_5 = (_Bool)1;
_Bool var_6 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)18727;
int zero = 0;
signed char var_16 = (signed char)-66;
unsigned long long int var_17 = 12936075630641875150ULL;
unsigned long long int var_18 = 17314741971929039353ULL;
unsigned long long int var_19 = 13844966947808134878ULL;
signed char var_20 = (signed char)-90;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
