#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-31602;
int var_2 = 254305015;
unsigned char var_5 = (unsigned char)86;
long long int var_7 = -914149374732472748LL;
signed char var_11 = (signed char)-117;
signed char var_12 = (signed char)6;
unsigned long long int var_16 = 14849012090778039041ULL;
signed char var_17 = (signed char)-67;
int zero = 0;
short var_20 = (short)24520;
short var_21 = (short)-29913;
unsigned long long int var_22 = 12668077719723057794ULL;
int var_23 = 135625684;
unsigned int var_24 = 3272882416U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
