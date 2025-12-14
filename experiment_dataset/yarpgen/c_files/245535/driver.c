#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-39;
unsigned short var_7 = (unsigned short)10904;
_Bool var_8 = (_Bool)1;
signed char var_9 = (signed char)-52;
long long int var_12 = 5424769289724106101LL;
int zero = 0;
short var_15 = (short)1190;
unsigned int var_16 = 1753067306U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
