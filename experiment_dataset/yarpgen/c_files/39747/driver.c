#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)78;
unsigned char var_2 = (unsigned char)180;
unsigned char var_4 = (unsigned char)168;
unsigned char var_8 = (unsigned char)217;
signed char var_9 = (signed char)63;
unsigned char var_10 = (unsigned char)24;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)53;
signed char var_18 = (signed char)-19;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
