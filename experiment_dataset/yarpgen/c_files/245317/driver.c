#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-48;
long long int var_5 = -6620652856846026398LL;
long long int var_7 = -870361330471819021LL;
unsigned short var_9 = (unsigned short)4583;
int var_11 = -1193762738;
int zero = 0;
int var_12 = -495389394;
long long int var_13 = -3329059785429912589LL;
short var_14 = (short)4631;
signed char var_15 = (signed char)80;
unsigned int var_16 = 3146835319U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
