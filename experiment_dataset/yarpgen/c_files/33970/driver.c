#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6964669828590637753LL;
long long int var_3 = 4185444112050780528LL;
long long int var_4 = 6375114396555458920LL;
unsigned long long int var_7 = 15035401622526776642ULL;
unsigned int var_8 = 4196029393U;
int var_9 = 1416596344;
short var_10 = (short)13729;
int zero = 0;
_Bool var_12 = (_Bool)1;
long long int var_13 = -3173834648325999031LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
