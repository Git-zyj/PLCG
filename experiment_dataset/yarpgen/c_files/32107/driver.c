#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3771624583U;
unsigned char var_2 = (unsigned char)98;
signed char var_3 = (signed char)-63;
signed char var_8 = (signed char)-97;
int zero = 0;
signed char var_11 = (signed char)56;
unsigned long long int var_12 = 10251067335816759812ULL;
unsigned char var_13 = (unsigned char)129;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
