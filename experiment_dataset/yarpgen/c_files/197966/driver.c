#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-121;
unsigned int var_4 = 2349297719U;
_Bool var_7 = (_Bool)0;
short var_9 = (short)27216;
int zero = 0;
short var_13 = (short)13906;
signed char var_14 = (signed char)60;
unsigned char var_15 = (unsigned char)129;
long long int var_16 = 7795382222752741245LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
