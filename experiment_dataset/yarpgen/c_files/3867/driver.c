#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)71;
short var_4 = (short)16665;
long long int var_5 = 6016831241286227898LL;
signed char var_7 = (signed char)54;
_Bool var_9 = (_Bool)1;
unsigned int var_11 = 787355459U;
short var_15 = (short)24304;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)35586;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-29;
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
