#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-49;
unsigned int var_3 = 1559537725U;
long long int var_4 = 4594637768950827822LL;
long long int var_5 = 2739621080337832821LL;
int var_6 = -862088986;
unsigned long long int var_8 = 7163108275950625255ULL;
unsigned long long int var_11 = 11186984273251734991ULL;
long long int var_12 = -4565809546907161292LL;
int zero = 0;
long long int var_16 = 1523028617157053491LL;
signed char var_17 = (signed char)-27;
unsigned char var_18 = (unsigned char)138;
void init() {
}

void checksum() {
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
