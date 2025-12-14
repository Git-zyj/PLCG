#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_2 = -8744260615508899766LL;
_Bool var_3 = (_Bool)0;
signed char var_6 = (signed char)94;
signed char var_8 = (signed char)-13;
long long int var_9 = 5556537789542097744LL;
unsigned short var_10 = (unsigned short)37828;
int zero = 0;
unsigned char var_12 = (unsigned char)229;
unsigned int var_13 = 4017602246U;
long long int var_14 = -4983563179431583453LL;
short var_15 = (short)5745;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
