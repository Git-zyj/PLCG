#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-3293;
unsigned long long int var_4 = 12490155368093048735ULL;
int var_5 = -1405295488;
_Bool var_6 = (_Bool)0;
int var_11 = 1760987691;
long long int var_12 = 7127513860633316910LL;
int var_14 = -127818680;
int zero = 0;
signed char var_17 = (signed char)80;
signed char var_18 = (signed char)-6;
unsigned short var_19 = (unsigned short)37423;
unsigned char var_20 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
