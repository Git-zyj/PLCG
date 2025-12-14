#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18104085144963286560ULL;
long long int var_6 = -6913614062045935909LL;
unsigned char var_7 = (unsigned char)240;
unsigned short var_9 = (unsigned short)37889;
long long int var_10 = -4007783488696686990LL;
long long int var_12 = 8107812657653374213LL;
int zero = 0;
signed char var_13 = (signed char)85;
unsigned short var_14 = (unsigned short)65194;
short var_15 = (short)-19105;
unsigned long long int var_16 = 1172927263282529278ULL;
unsigned long long int var_17 = 15977766748614101373ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
