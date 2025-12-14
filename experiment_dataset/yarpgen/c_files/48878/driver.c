#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)32165;
signed char var_2 = (signed char)-24;
long long int var_3 = 8058139952513861305LL;
signed char var_4 = (signed char)34;
signed char var_8 = (signed char)-73;
unsigned int var_9 = 1832954234U;
int var_10 = 2059373715;
long long int var_12 = -4732529748588846030LL;
_Bool var_16 = (_Bool)1;
signed char var_18 = (signed char)-88;
int zero = 0;
int var_19 = 2136361371;
unsigned int var_20 = 2292477417U;
unsigned char var_21 = (unsigned char)137;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
