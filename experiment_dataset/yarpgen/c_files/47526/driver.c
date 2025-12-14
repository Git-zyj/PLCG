#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8116986139512789683LL;
_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 14193889518799821976ULL;
unsigned short var_4 = (unsigned short)41185;
signed char var_5 = (signed char)-27;
int var_7 = 978832169;
short var_8 = (short)-32260;
unsigned short var_9 = (unsigned short)46005;
unsigned char var_10 = (unsigned char)76;
int var_11 = -1106528534;
short var_13 = (short)5024;
unsigned char var_17 = (unsigned char)30;
unsigned char var_18 = (unsigned char)181;
int zero = 0;
long long int var_20 = 2308438597344495155LL;
unsigned long long int var_21 = 17871341379326428215ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
