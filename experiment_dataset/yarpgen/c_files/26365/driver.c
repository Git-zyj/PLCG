#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 734797526;
signed char var_3 = (signed char)-13;
unsigned char var_8 = (unsigned char)255;
unsigned short var_10 = (unsigned short)15754;
int zero = 0;
long long int var_18 = -199756600259536493LL;
unsigned int var_19 = 3569604763U;
signed char var_20 = (signed char)-3;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
