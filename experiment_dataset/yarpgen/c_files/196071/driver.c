#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)7128;
signed char var_9 = (signed char)118;
signed char var_11 = (signed char)-70;
int zero = 0;
int var_15 = 1392520830;
unsigned char var_16 = (unsigned char)105;
long long int var_17 = -7339635834176598292LL;
void init() {
}

void checksum() {
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
