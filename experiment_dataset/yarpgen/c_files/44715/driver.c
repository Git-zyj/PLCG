#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 701264771350028510LL;
long long int var_2 = -8947941156825797727LL;
long long int var_8 = -5319183602696723954LL;
unsigned char var_9 = (unsigned char)159;
unsigned char var_11 = (unsigned char)154;
int zero = 0;
unsigned char var_16 = (unsigned char)188;
long long int var_17 = -6690643543188288861LL;
unsigned long long int var_18 = 12323861700720986960ULL;
void init() {
}

void checksum() {
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
