#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)121;
signed char var_8 = (signed char)-51;
signed char var_11 = (signed char)-77;
unsigned int var_14 = 3036641527U;
unsigned char var_15 = (unsigned char)11;
int var_18 = -937235852;
int zero = 0;
unsigned short var_19 = (unsigned short)31329;
unsigned short var_20 = (unsigned short)18548;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
