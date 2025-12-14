#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)106;
signed char var_1 = (signed char)-72;
int var_2 = -444464585;
short var_3 = (short)27924;
long long int var_4 = -5286106057763128766LL;
unsigned char var_7 = (unsigned char)55;
short var_11 = (short)-25738;
int var_12 = 840003582;
int zero = 0;
short var_13 = (short)-13976;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
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
