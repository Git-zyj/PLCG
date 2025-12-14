#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
unsigned char var_1 = (unsigned char)160;
long long int var_2 = 750941653882669074LL;
int var_4 = -1543082146;
short var_5 = (short)7995;
signed char var_7 = (signed char)7;
long long int var_8 = -8996080929942712679LL;
long long int var_9 = 5617152219326297926LL;
int zero = 0;
short var_10 = (short)-4051;
int var_11 = 96480408;
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
