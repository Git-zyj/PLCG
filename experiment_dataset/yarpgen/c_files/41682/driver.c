#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned short var_3 = (unsigned short)746;
unsigned short var_5 = (unsigned short)11963;
unsigned char var_7 = (unsigned char)22;
unsigned short var_8 = (unsigned short)2411;
int zero = 0;
long long int var_10 = -5286962824552847347LL;
signed char var_11 = (signed char)-38;
unsigned short var_12 = (unsigned short)8441;
unsigned int var_13 = 3339051313U;
int var_14 = -1322056365;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
