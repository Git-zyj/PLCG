#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -3909254170596467818LL;
unsigned char var_4 = (unsigned char)234;
unsigned int var_5 = 615139326U;
int var_6 = 686106576;
unsigned int var_8 = 126771724U;
short var_9 = (short)32356;
int zero = 0;
unsigned int var_10 = 69247516U;
unsigned short var_11 = (unsigned short)14074;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
