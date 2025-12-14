#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4803157912165461515LL;
signed char var_3 = (signed char)98;
unsigned int var_4 = 3444377929U;
_Bool var_5 = (_Bool)1;
short var_6 = (short)250;
unsigned int var_8 = 3337481809U;
long long int var_9 = 4517934377198864619LL;
int zero = 0;
unsigned int var_10 = 3055023743U;
unsigned int var_11 = 335546911U;
unsigned short var_12 = (unsigned short)29525;
long long int var_13 = 8550839705393439648LL;
long long int var_14 = -4935591011137121379LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
