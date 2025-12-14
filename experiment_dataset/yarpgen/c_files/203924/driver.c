#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-107;
unsigned long long int var_7 = 16500874946048955643ULL;
unsigned long long int var_9 = 4847003240494107783ULL;
unsigned short var_10 = (unsigned short)20920;
int zero = 0;
unsigned int var_13 = 614503041U;
long long int var_14 = 781447239579270088LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
