#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -2591866157513651900LL;
signed char var_4 = (signed char)-11;
short var_6 = (short)-25005;
short var_9 = (short)-13113;
long long int var_10 = 2629057122310703497LL;
long long int var_11 = -587010777549028177LL;
short var_12 = (short)-3306;
int var_13 = 1372346423;
unsigned short var_16 = (unsigned short)31891;
int zero = 0;
unsigned short var_18 = (unsigned short)17647;
unsigned short var_19 = (unsigned short)39949;
signed char var_20 = (signed char)-2;
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
