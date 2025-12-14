#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3025520537U;
unsigned long long int var_8 = 12106087036018324336ULL;
unsigned int var_9 = 3490653326U;
_Bool var_11 = (_Bool)0;
unsigned char var_17 = (unsigned char)120;
int zero = 0;
short var_18 = (short)5362;
unsigned short var_19 = (unsigned short)4444;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
