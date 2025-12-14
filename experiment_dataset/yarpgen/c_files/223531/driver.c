#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 30732165U;
long long int var_4 = 7761108423801953007LL;
unsigned char var_6 = (unsigned char)242;
_Bool var_7 = (_Bool)0;
long long int var_8 = -8379350440289992305LL;
int zero = 0;
signed char var_16 = (signed char)-67;
unsigned char var_17 = (unsigned char)19;
unsigned long long int var_18 = 14476724461207404356ULL;
signed char var_19 = (signed char)118;
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
