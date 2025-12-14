#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-121;
int var_4 = -1450287029;
unsigned char var_9 = (unsigned char)206;
unsigned int var_13 = 3451809471U;
int zero = 0;
int var_14 = -780062663;
long long int var_15 = -1613014977065389040LL;
void init() {
}

void checksum() {
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
