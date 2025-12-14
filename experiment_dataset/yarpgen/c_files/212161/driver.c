#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 18071883074173668754ULL;
unsigned int var_4 = 3860478153U;
int var_5 = -1644585606;
unsigned char var_7 = (unsigned char)205;
unsigned long long int var_8 = 11951262840036701719ULL;
unsigned int var_10 = 1099551797U;
long long int var_14 = -3938604225918695140LL;
_Bool var_15 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int var_19 = -757154351;
int zero = 0;
short var_20 = (short)-29035;
unsigned char var_21 = (unsigned char)60;
long long int var_22 = -7821741092909555276LL;
signed char var_23 = (signed char)53;
short var_24 = (short)31831;
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
