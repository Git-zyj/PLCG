#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-120;
unsigned char var_1 = (unsigned char)54;
unsigned int var_2 = 4246760535U;
int var_3 = -1166799663;
int var_5 = -953547483;
_Bool var_7 = (_Bool)0;
signed char var_8 = (signed char)51;
unsigned short var_9 = (unsigned short)7724;
int zero = 0;
unsigned short var_11 = (unsigned short)50752;
unsigned short var_12 = (unsigned short)11929;
unsigned long long int var_13 = 3272772821917599532ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
