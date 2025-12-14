#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3907583745228374275LL;
long long int var_4 = 6780395864473085234LL;
_Bool var_5 = (_Bool)1;
unsigned int var_6 = 2658785073U;
unsigned int var_7 = 2734157559U;
int zero = 0;
long long int var_10 = -6313597300004024039LL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)15;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
