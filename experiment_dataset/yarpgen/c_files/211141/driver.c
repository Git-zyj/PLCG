#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 530079848547959227LL;
unsigned long long int var_3 = 10545173919812214014ULL;
unsigned long long int var_5 = 5827658342910137147ULL;
signed char var_6 = (signed char)86;
unsigned long long int var_8 = 953499044307843528ULL;
long long int var_10 = -671715587059781513LL;
unsigned short var_11 = (unsigned short)50333;
unsigned long long int var_13 = 14701001740464037650ULL;
int zero = 0;
signed char var_14 = (signed char)54;
signed char var_15 = (signed char)120;
short var_16 = (short)-16308;
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
