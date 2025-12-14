#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62034;
unsigned int var_2 = 4165544558U;
_Bool var_3 = (_Bool)0;
unsigned long long int var_6 = 17662747326876809067ULL;
int var_8 = 1611286863;
unsigned int var_9 = 1341839893U;
_Bool var_10 = (_Bool)0;
int zero = 0;
long long int var_12 = 8357489960578995256LL;
unsigned int var_13 = 2477686230U;
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
