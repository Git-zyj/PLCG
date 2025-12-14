#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 626645024270207516LL;
unsigned char var_3 = (unsigned char)97;
signed char var_4 = (signed char)-107;
unsigned char var_6 = (unsigned char)147;
unsigned short var_7 = (unsigned short)9068;
unsigned long long int var_12 = 6324581035352132248ULL;
unsigned long long int var_13 = 499561734119628141ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)151;
unsigned short var_15 = (unsigned short)37698;
unsigned char var_16 = (unsigned char)156;
int var_17 = -315989294;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
