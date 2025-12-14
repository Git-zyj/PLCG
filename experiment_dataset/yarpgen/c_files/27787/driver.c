#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)45;
unsigned short var_4 = (unsigned short)18182;
int var_11 = -733174818;
long long int var_12 = -5941824626228028402LL;
int zero = 0;
unsigned short var_19 = (unsigned short)37966;
long long int var_20 = -3391642910389922739LL;
unsigned long long int var_21 = 12024459207088952648ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
