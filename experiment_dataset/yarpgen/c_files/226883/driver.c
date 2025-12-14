#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12119472446960973394ULL;
int var_2 = 653154293;
unsigned int var_3 = 3534778510U;
signed char var_4 = (signed char)127;
short var_7 = (short)-7697;
short var_8 = (short)22942;
short var_10 = (short)32492;
signed char var_11 = (signed char)-94;
long long int var_12 = -8101635877006922294LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
short var_14 = (short)22573;
void init() {
}

void checksum() {
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
