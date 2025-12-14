#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16384356696373995914ULL;
int var_6 = -723282421;
unsigned int var_8 = 639981860U;
unsigned long long int var_10 = 12573760174613513388ULL;
int zero = 0;
unsigned int var_13 = 3990901661U;
unsigned short var_14 = (unsigned short)46047;
unsigned int var_15 = 3354612941U;
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
