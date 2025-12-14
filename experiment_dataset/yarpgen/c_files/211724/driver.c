#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-80;
unsigned int var_4 = 885286085U;
long long int var_9 = 2227267031263178263LL;
unsigned long long int var_11 = 12460597550932494834ULL;
unsigned long long int var_12 = 18010184623813311077ULL;
unsigned short var_13 = (unsigned short)36975;
signed char var_14 = (signed char)23;
short var_15 = (short)-22914;
unsigned int var_16 = 902073308U;
unsigned char var_17 = (unsigned char)193;
int zero = 0;
unsigned char var_18 = (unsigned char)14;
unsigned int var_19 = 605071582U;
unsigned int var_20 = 2525425112U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
