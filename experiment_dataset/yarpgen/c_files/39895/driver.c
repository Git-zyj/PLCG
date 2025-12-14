#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 9430562091831887227ULL;
int var_11 = -526719051;
unsigned int var_13 = 106767744U;
unsigned long long int var_15 = 5272308932121821472ULL;
int zero = 0;
int var_16 = 1343883513;
unsigned char var_17 = (unsigned char)57;
int var_18 = 811693994;
unsigned short var_19 = (unsigned short)39822;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
