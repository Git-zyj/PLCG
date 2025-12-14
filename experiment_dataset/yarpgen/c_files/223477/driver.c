#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7625144519625407584ULL;
signed char var_1 = (signed char)74;
long long int var_2 = 7836396880487577408LL;
unsigned long long int var_4 = 620005598704903611ULL;
short var_5 = (short)-15972;
long long int var_8 = -9007694285500826821LL;
signed char var_9 = (signed char)82;
long long int var_10 = 2036709092953399323LL;
int zero = 0;
signed char var_12 = (signed char)-100;
unsigned short var_13 = (unsigned short)63920;
unsigned int var_14 = 3169648553U;
unsigned long long int var_15 = 8930701040612366617ULL;
short var_16 = (short)-18401;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
