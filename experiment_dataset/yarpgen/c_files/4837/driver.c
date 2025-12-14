#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3460974725374640984LL;
long long int var_4 = 6680356441523483739LL;
long long int var_5 = -4411358686553559416LL;
unsigned char var_7 = (unsigned char)27;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_12 = (unsigned short)58982;
unsigned char var_13 = (unsigned char)66;
short var_14 = (short)-27176;
void init() {
}

void checksum() {
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
