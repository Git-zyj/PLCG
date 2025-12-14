#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2453383856717676386ULL;
unsigned short var_1 = (unsigned short)13623;
long long int var_2 = 6706863186152440840LL;
long long int var_3 = -3119498029922271532LL;
long long int var_5 = 9061008474818359198LL;
int var_6 = -1799644937;
unsigned long long int var_7 = 12759054932400267673ULL;
unsigned short var_8 = (unsigned short)61821;
signed char var_9 = (signed char)-65;
_Bool var_10 = (_Bool)0;
signed char var_15 = (signed char)11;
int zero = 0;
signed char var_17 = (signed char)14;
unsigned short var_18 = (unsigned short)24329;
unsigned short var_19 = (unsigned short)47517;
void init() {
}

void checksum() {
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
