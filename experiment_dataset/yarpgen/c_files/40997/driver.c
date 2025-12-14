#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1088337480;
short var_4 = (short)15932;
signed char var_8 = (signed char)80;
unsigned char var_9 = (unsigned char)188;
unsigned char var_12 = (unsigned char)36;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 2823432474U;
unsigned int var_16 = 3520369053U;
unsigned long long int var_17 = 3569193676033891961ULL;
unsigned long long int var_18 = 17790660766104765072ULL;
unsigned char var_19 = (unsigned char)118;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
