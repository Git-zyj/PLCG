#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1567509739U;
int var_2 = 2071800460;
int var_4 = -700750685;
long long int var_6 = -4269358812041557638LL;
long long int var_9 = 4869903474606624173LL;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 7242964100960042582ULL;
unsigned int var_14 = 260947675U;
int zero = 0;
unsigned char var_16 = (unsigned char)98;
unsigned short var_17 = (unsigned short)24012;
unsigned long long int var_18 = 761929526810328207ULL;
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
