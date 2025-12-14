#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)14937;
short var_7 = (short)18209;
short var_8 = (short)11018;
_Bool var_11 = (_Bool)1;
long long int var_13 = 6446645709692173094LL;
short var_14 = (short)274;
int zero = 0;
unsigned char var_15 = (unsigned char)34;
short var_16 = (short)23788;
void init() {
}

void checksum() {
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
