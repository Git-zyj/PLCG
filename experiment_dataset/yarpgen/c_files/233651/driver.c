#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12109;
unsigned int var_6 = 2344041575U;
signed char var_9 = (signed char)120;
long long int var_11 = 3640702974677837424LL;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)22307;
unsigned short var_14 = (unsigned short)48546;
unsigned char var_15 = (unsigned char)138;
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
