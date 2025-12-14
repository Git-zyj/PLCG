#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2559692013571105267LL;
unsigned char var_9 = (unsigned char)214;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
long long int var_16 = -4316862014859964122LL;
int zero = 0;
short var_17 = (short)20541;
unsigned short var_18 = (unsigned short)15915;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
