#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2320322943831379774LL;
short var_2 = (short)-1453;
unsigned char var_5 = (unsigned char)246;
long long int var_6 = 4373752206252852859LL;
signed char var_7 = (signed char)102;
unsigned long long int var_8 = 9299301502960838086ULL;
unsigned long long int var_9 = 14781094939372244103ULL;
unsigned long long int var_14 = 9482499175053696553ULL;
int zero = 0;
signed char var_18 = (signed char)72;
int var_19 = 2072910650;
void init() {
}

void checksum() {
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
