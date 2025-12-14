#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)29;
unsigned short var_2 = (unsigned short)43019;
short var_5 = (short)-10587;
unsigned long long int var_6 = 15353625033388523809ULL;
long long int var_7 = -2362659417844290127LL;
unsigned char var_8 = (unsigned char)104;
int var_11 = 1726405196;
unsigned short var_12 = (unsigned short)10638;
int zero = 0;
long long int var_16 = 3000908148927971149LL;
int var_17 = -598064913;
long long int var_18 = -3136756957025775892LL;
unsigned short var_19 = (unsigned short)15706;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
