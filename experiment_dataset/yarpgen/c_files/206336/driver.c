#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-61;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)10;
long long int var_7 = -3034852509435020589LL;
signed char var_8 = (signed char)-82;
int var_9 = -194743783;
signed char var_11 = (signed char)14;
unsigned long long int var_13 = 2820631944075611513ULL;
long long int var_15 = -5786400395024290420LL;
int zero = 0;
unsigned long long int var_16 = 3711227772301493145ULL;
signed char var_17 = (signed char)111;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)111;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
