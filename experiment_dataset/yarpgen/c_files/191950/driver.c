#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)70;
unsigned char var_1 = (unsigned char)92;
signed char var_5 = (signed char)-1;
long long int var_12 = 8744162861767003805LL;
int zero = 0;
long long int var_17 = 4883390094175057815LL;
int var_18 = -1365442212;
unsigned char var_19 = (unsigned char)84;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
