#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2620881128U;
unsigned int var_3 = 3941106410U;
signed char var_4 = (signed char)-101;
signed char var_8 = (signed char)13;
signed char var_9 = (signed char)-124;
unsigned int var_12 = 388621657U;
signed char var_15 = (signed char)-10;
unsigned int var_19 = 4147779127U;
int zero = 0;
unsigned int var_20 = 3587491968U;
unsigned int var_21 = 549734812U;
signed char var_22 = (signed char)113;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
