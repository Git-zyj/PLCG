#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_5 = 7010258413249068842LL;
unsigned long long int var_6 = 11346572067223861794ULL;
int var_9 = -1603922314;
unsigned char var_11 = (unsigned char)115;
unsigned long long int var_12 = 17724191079871751563ULL;
unsigned long long int var_13 = 16214639131446881115ULL;
unsigned short var_14 = (unsigned short)45939;
unsigned int var_15 = 3625363025U;
int var_17 = -107276388;
int zero = 0;
unsigned short var_18 = (unsigned short)939;
unsigned short var_19 = (unsigned short)60258;
unsigned int var_20 = 3020792807U;
unsigned int var_21 = 3298434151U;
unsigned int var_22 = 4212517952U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
