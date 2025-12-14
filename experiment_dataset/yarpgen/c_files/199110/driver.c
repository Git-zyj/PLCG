#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42707;
int var_1 = 1779487702;
int var_2 = 641903559;
long long int var_4 = -643236247870534640LL;
long long int var_5 = -6861223142720851500LL;
unsigned short var_7 = (unsigned short)28549;
unsigned char var_8 = (unsigned char)114;
signed char var_9 = (signed char)-86;
long long int var_12 = -3975785274567363964LL;
int var_13 = -1871805040;
int zero = 0;
long long int var_18 = -5486005577418358745LL;
unsigned short var_19 = (unsigned short)54917;
unsigned char var_20 = (unsigned char)247;
unsigned long long int var_21 = 6765205077689976523ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
