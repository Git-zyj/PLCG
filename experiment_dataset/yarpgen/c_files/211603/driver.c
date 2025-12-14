#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2973456280743784176ULL;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)51935;
unsigned short var_11 = (unsigned short)64963;
int zero = 0;
long long int var_12 = 8676837800103585326LL;
unsigned long long int var_13 = 15333006370736689655ULL;
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
