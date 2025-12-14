#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4227464433U;
long long int var_3 = 3694990195767599123LL;
_Bool var_5 = (_Bool)0;
unsigned int var_8 = 3847894385U;
long long int var_9 = -713730042031019407LL;
unsigned char var_11 = (unsigned char)213;
int zero = 0;
unsigned short var_12 = (unsigned short)8841;
signed char var_13 = (signed char)100;
long long int var_14 = 4809025155968072762LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
