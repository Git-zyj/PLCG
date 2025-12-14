#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26143;
long long int var_2 = -6073339996881349215LL;
short var_3 = (short)22061;
unsigned char var_4 = (unsigned char)152;
_Bool var_10 = (_Bool)0;
long long int var_11 = 3866464371802652191LL;
int zero = 0;
long long int var_12 = -9075343762477770762LL;
long long int var_13 = -1479321888862057873LL;
_Bool var_14 = (_Bool)1;
long long int var_15 = 5397158241293219463LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
