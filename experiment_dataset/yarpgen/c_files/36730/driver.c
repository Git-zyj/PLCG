#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2383270274U;
unsigned int var_2 = 1095195738U;
unsigned int var_3 = 2845033570U;
unsigned char var_6 = (unsigned char)79;
long long int var_13 = -362356460267124274LL;
unsigned int var_15 = 1605742437U;
int zero = 0;
long long int var_17 = -5177308694762553513LL;
_Bool var_18 = (_Bool)0;
signed char var_19 = (signed char)-41;
unsigned short var_20 = (unsigned short)57168;
void init() {
}

void checksum() {
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
