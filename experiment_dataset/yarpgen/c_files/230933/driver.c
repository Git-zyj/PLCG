#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -916514278;
long long int var_4 = 3453845882743105884LL;
unsigned int var_7 = 1486834047U;
unsigned long long int var_9 = 4979780409367826937ULL;
int var_15 = 927711049;
long long int var_16 = 7997716514572081227LL;
int zero = 0;
int var_17 = -1286591572;
unsigned int var_18 = 1479260868U;
void init() {
}

void checksum() {
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
