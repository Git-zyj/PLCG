#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2081931817;
unsigned short var_2 = (unsigned short)21424;
unsigned short var_4 = (unsigned short)62095;
unsigned int var_7 = 3210589580U;
int var_9 = 1472499145;
signed char var_10 = (signed char)-39;
_Bool var_12 = (_Bool)0;
unsigned short var_15 = (unsigned short)57009;
int zero = 0;
signed char var_17 = (signed char)106;
unsigned int var_18 = 3905911716U;
long long int var_19 = -2871580307821120069LL;
long long int var_20 = -168621765502057309LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
