#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15932231807986591224ULL;
long long int var_4 = 4270885031600650351LL;
short var_8 = (short)31382;
long long int var_9 = 4912139049976940966LL;
int zero = 0;
unsigned short var_10 = (unsigned short)63974;
unsigned short var_11 = (unsigned short)41122;
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
