#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15266;
int var_1 = -394778493;
int var_3 = 1124650523;
int var_5 = -1765211793;
_Bool var_6 = (_Bool)0;
signed char var_8 = (signed char)125;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 16493019109038921739ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)152;
unsigned char var_14 = (unsigned char)216;
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
