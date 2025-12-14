#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -981373770;
long long int var_6 = -7074608016964717159LL;
unsigned short var_8 = (unsigned short)34158;
int zero = 0;
long long int var_11 = -5674536396843834946LL;
int var_12 = -1181397055;
int var_13 = 1632813924;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
