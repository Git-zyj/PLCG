#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 225008700U;
signed char var_1 = (signed char)110;
unsigned char var_2 = (unsigned char)244;
unsigned short var_4 = (unsigned short)49005;
unsigned short var_5 = (unsigned short)11593;
long long int var_6 = -8308256770468790665LL;
int zero = 0;
long long int var_10 = -8920247554774886130LL;
long long int var_11 = 1854559772792466234LL;
unsigned short var_12 = (unsigned short)60453;
signed char var_13 = (signed char)-111;
long long int var_14 = -137378447952648652LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
