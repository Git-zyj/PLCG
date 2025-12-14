#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -252663998238041763LL;
unsigned char var_9 = (unsigned char)144;
unsigned int var_11 = 1884915649U;
int zero = 0;
signed char var_12 = (signed char)-51;
unsigned char var_13 = (unsigned char)41;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
