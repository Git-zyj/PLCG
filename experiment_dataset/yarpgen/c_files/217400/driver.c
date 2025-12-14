#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9075861313271020403LL;
long long int var_2 = 6592822460591235911LL;
unsigned int var_4 = 766043639U;
short var_5 = (short)5903;
long long int var_7 = -2750497843440801227LL;
int var_9 = -282174859;
long long int var_10 = -6141610259496213007LL;
short var_11 = (short)10883;
int zero = 0;
int var_12 = 1452926083;
_Bool var_13 = (_Bool)1;
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
