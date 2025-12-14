#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17544393225127917016ULL;
_Bool var_2 = (_Bool)1;
short var_3 = (short)10463;
unsigned int var_4 = 272164415U;
int var_5 = -13058638;
int zero = 0;
unsigned short var_13 = (unsigned short)57803;
_Bool var_14 = (_Bool)0;
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
