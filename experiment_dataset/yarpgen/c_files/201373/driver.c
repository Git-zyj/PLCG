#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)126;
signed char var_6 = (signed char)-55;
int var_10 = 1623225211;
unsigned short var_12 = (unsigned short)48418;
long long int var_15 = 3639616454481093176LL;
int zero = 0;
long long int var_18 = 5320688792619333281LL;
long long int var_19 = -3652673395429947904LL;
short var_20 = (short)-17458;
long long int var_21 = 5375962893454595971LL;
int var_22 = -780835477;
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
