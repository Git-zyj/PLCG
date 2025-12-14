#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2416227329020084631ULL;
unsigned long long int var_5 = 17103622214525365252ULL;
long long int var_7 = 3755525971367495825LL;
signed char var_12 = (signed char)-54;
int zero = 0;
unsigned int var_19 = 241281565U;
unsigned int var_20 = 623122268U;
short var_21 = (short)19747;
int var_22 = 624577262;
void init() {
}

void checksum() {
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
