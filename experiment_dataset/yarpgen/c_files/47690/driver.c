#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)178;
long long int var_1 = -6244390057234082145LL;
unsigned long long int var_6 = 12970320414210286318ULL;
short var_7 = (short)13733;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 6485698495452738628ULL;
int var_10 = 362012225;
int zero = 0;
unsigned long long int var_14 = 270102559544572761ULL;
unsigned long long int var_15 = 8186507299952184336ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
