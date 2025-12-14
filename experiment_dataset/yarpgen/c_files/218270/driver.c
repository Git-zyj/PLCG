#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5776701703156665805ULL;
_Bool var_4 = (_Bool)0;
unsigned long long int var_8 = 6540357334704838074ULL;
int zero = 0;
long long int var_10 = -9142929379813581386LL;
unsigned int var_11 = 1012261592U;
unsigned char var_12 = (unsigned char)57;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
