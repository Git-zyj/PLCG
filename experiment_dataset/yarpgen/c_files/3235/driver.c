#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3843719588U;
unsigned long long int var_3 = 253409682683630709ULL;
signed char var_4 = (signed char)-97;
long long int var_5 = -6779049673455464449LL;
int var_13 = 1201739567;
unsigned char var_14 = (unsigned char)34;
int zero = 0;
unsigned char var_15 = (unsigned char)114;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
