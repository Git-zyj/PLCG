#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13234917383645538762ULL;
unsigned short var_2 = (unsigned short)16443;
int var_3 = 150147723;
unsigned char var_5 = (unsigned char)65;
short var_8 = (short)31388;
unsigned short var_10 = (unsigned short)49626;
unsigned short var_11 = (unsigned short)13372;
int zero = 0;
signed char var_13 = (signed char)-77;
unsigned long long int var_14 = 15007821154240187412ULL;
void init() {
}

void checksum() {
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
