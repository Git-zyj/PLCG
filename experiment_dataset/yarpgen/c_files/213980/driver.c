#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4178418060700338725LL;
long long int var_7 = -3620410315151604474LL;
short var_9 = (short)6292;
signed char var_14 = (signed char)-29;
int zero = 0;
unsigned short var_17 = (unsigned short)31620;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)26861;
unsigned char var_20 = (unsigned char)252;
long long int var_21 = -8486600701245773999LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
