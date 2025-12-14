#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)145;
short var_7 = (short)-9658;
unsigned char var_10 = (unsigned char)121;
int zero = 0;
unsigned char var_13 = (unsigned char)92;
unsigned long long int var_14 = 12513660388158493131ULL;
unsigned long long int var_15 = 3670539859390832064ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
