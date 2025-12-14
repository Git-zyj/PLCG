#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1567279996;
long long int var_3 = 1575895250468367119LL;
signed char var_5 = (signed char)81;
long long int var_6 = -3583226455058945699LL;
signed char var_7 = (signed char)97;
unsigned char var_8 = (unsigned char)176;
int var_11 = 1759908366;
long long int var_13 = 9128470761895957221LL;
int zero = 0;
signed char var_14 = (signed char)-2;
int var_15 = -853682247;
int var_16 = -380025137;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
