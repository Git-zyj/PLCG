#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)721;
_Bool var_1 = (_Bool)1;
short var_2 = (short)7377;
unsigned long long int var_4 = 12421718356888095820ULL;
unsigned long long int var_7 = 1178436361195186288ULL;
unsigned long long int var_8 = 6205265196649778367ULL;
signed char var_10 = (signed char)-25;
int zero = 0;
unsigned int var_11 = 794382991U;
unsigned char var_12 = (unsigned char)51;
unsigned long long int var_13 = 17414891990911553716ULL;
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
