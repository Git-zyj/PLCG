#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2973396888998635653LL;
signed char var_5 = (signed char)104;
unsigned short var_6 = (unsigned short)8368;
long long int var_7 = 6936094868526023189LL;
unsigned long long int var_8 = 9132602462618304626ULL;
int zero = 0;
int var_11 = -858939575;
int var_12 = 1910385821;
signed char var_13 = (signed char)-71;
unsigned int var_14 = 3314279114U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
