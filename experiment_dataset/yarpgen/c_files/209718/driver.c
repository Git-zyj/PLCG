#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4407809182341610449LL;
short var_1 = (short)15715;
unsigned char var_2 = (unsigned char)243;
int var_3 = 1156152620;
unsigned int var_5 = 2920415816U;
short var_7 = (short)-17270;
unsigned int var_9 = 180514541U;
unsigned short var_11 = (unsigned short)51719;
unsigned int var_14 = 370238181U;
unsigned int var_15 = 1238623823U;
int zero = 0;
_Bool var_16 = (_Bool)1;
signed char var_17 = (signed char)-77;
unsigned char var_18 = (unsigned char)189;
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
