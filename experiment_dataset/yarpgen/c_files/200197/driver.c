#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-6190;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 8811008355731771724ULL;
signed char var_10 = (signed char)29;
int var_11 = 702391983;
long long int var_16 = 5424796950991757413LL;
int var_17 = 975681502;
int zero = 0;
long long int var_18 = 2595050480178243874LL;
unsigned char var_19 = (unsigned char)120;
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
