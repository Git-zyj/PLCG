#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 3134629833604191203LL;
unsigned char var_11 = (unsigned char)229;
unsigned short var_12 = (unsigned short)11933;
int zero = 0;
long long int var_14 = -1527133561791562961LL;
unsigned char var_15 = (unsigned char)77;
long long int var_16 = -5597065431553620108LL;
unsigned short var_17 = (unsigned short)1369;
signed char var_18 = (signed char)28;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
