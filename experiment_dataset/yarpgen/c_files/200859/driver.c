#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 1006976779798540440ULL;
signed char var_7 = (signed char)41;
unsigned char var_8 = (unsigned char)195;
int zero = 0;
unsigned long long int var_17 = 4206150880700741754ULL;
unsigned int var_18 = 1825582729U;
unsigned short var_19 = (unsigned short)22261;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
