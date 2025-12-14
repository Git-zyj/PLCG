#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)82;
signed char var_1 = (signed char)42;
unsigned int var_2 = 2984865265U;
unsigned int var_3 = 2866792111U;
unsigned int var_5 = 2062480984U;
unsigned char var_9 = (unsigned char)159;
unsigned long long int var_10 = 7877041653830271865ULL;
int zero = 0;
unsigned short var_17 = (unsigned short)2570;
signed char var_18 = (signed char)13;
unsigned long long int var_19 = 15245968316120560484ULL;
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
