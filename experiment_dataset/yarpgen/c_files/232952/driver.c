#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 524632726;
int var_1 = -1671836923;
int var_6 = 4079184;
unsigned short var_7 = (unsigned short)41514;
unsigned char var_9 = (unsigned char)106;
unsigned char var_17 = (unsigned char)7;
int zero = 0;
unsigned long long int var_18 = 15416861834950260772ULL;
unsigned long long int var_19 = 14299506105105977054ULL;
int var_20 = -247298214;
unsigned long long int var_21 = 6733090683328832275ULL;
signed char var_22 = (signed char)31;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
