#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)13270;
unsigned short var_8 = (unsigned short)49819;
short var_9 = (short)31486;
short var_13 = (short)19051;
signed char var_15 = (signed char)-109;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_20 = 8208451757853454030LL;
signed char var_21 = (signed char)-27;
short var_22 = (short)5421;
unsigned int var_23 = 2728704378U;
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
