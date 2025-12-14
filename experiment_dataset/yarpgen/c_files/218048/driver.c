#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)192;
unsigned int var_3 = 4110713020U;
short var_6 = (short)-12374;
short var_9 = (short)-3063;
short var_12 = (short)30060;
int zero = 0;
unsigned short var_18 = (unsigned short)13855;
short var_19 = (short)-28256;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)57068;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
