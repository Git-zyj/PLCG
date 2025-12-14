#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)46828;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)10981;
unsigned int var_10 = 1321768411U;
unsigned int var_11 = 1902165723U;
int zero = 0;
unsigned short var_13 = (unsigned short)48908;
unsigned short var_14 = (unsigned short)19694;
unsigned int var_15 = 3331703107U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
