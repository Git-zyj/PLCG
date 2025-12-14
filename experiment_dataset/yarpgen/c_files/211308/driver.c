#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1675;
unsigned short var_1 = (unsigned short)41543;
signed char var_7 = (signed char)-72;
unsigned long long int var_9 = 17288720458805970721ULL;
unsigned int var_10 = 2426877467U;
unsigned long long int var_11 = 2940239838703101070ULL;
int var_14 = -266218841;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned short var_16 = (unsigned short)31672;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
