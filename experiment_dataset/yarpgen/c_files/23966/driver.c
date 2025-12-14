#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2627348967U;
unsigned long long int var_1 = 2776627154512807089ULL;
signed char var_2 = (signed char)62;
long long int var_4 = -6811855504580965293LL;
unsigned long long int var_5 = 16568252321797353435ULL;
signed char var_6 = (signed char)-10;
unsigned short var_7 = (unsigned short)59437;
unsigned char var_9 = (unsigned char)220;
unsigned int var_10 = 3103826221U;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 1537697594U;
int var_14 = 1421066299;
void init() {
}

void checksum() {
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
