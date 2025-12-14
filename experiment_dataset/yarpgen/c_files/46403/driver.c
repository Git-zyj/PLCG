#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2294246832192623996ULL;
long long int var_6 = -3363167757578217453LL;
signed char var_9 = (signed char)-44;
unsigned int var_10 = 2278846634U;
unsigned char var_12 = (unsigned char)174;
unsigned int var_18 = 4086454645U;
int zero = 0;
unsigned long long int var_20 = 3425614716225052572ULL;
unsigned short var_21 = (unsigned short)516;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)162;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
