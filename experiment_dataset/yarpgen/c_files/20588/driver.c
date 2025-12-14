#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1288485198455087875LL;
_Bool var_2 = (_Bool)1;
signed char var_5 = (signed char)-4;
unsigned short var_6 = (unsigned short)25262;
unsigned int var_9 = 828991220U;
signed char var_11 = (signed char)118;
unsigned char var_12 = (unsigned char)69;
int zero = 0;
long long int var_16 = 613121860146452314LL;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-31394;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)87;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
