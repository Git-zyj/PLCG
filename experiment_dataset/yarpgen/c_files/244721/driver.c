#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_7 = (short)7895;
unsigned char var_8 = (unsigned char)217;
unsigned long long int var_9 = 14208562597883030543ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)174;
unsigned long long int var_14 = 15653675517687739356ULL;
unsigned int var_15 = 3505543042U;
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
