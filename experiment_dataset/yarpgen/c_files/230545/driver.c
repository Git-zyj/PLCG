#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5702986519532392733LL;
_Bool var_11 = (_Bool)0;
int var_16 = -1887745228;
int zero = 0;
unsigned int var_19 = 3672215521U;
unsigned short var_20 = (unsigned short)27605;
unsigned int var_21 = 3534024761U;
unsigned long long int var_22 = 5816157512858655031ULL;
void init() {
}

void checksum() {
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
