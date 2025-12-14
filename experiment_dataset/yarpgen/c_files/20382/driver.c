#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)22;
short var_5 = (short)-20319;
long long int var_7 = -2910286234873179812LL;
unsigned char var_9 = (unsigned char)32;
int zero = 0;
unsigned int var_15 = 2230417692U;
signed char var_16 = (signed char)51;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
