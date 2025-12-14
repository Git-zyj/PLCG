#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2044692652929539898LL;
signed char var_3 = (signed char)-41;
_Bool var_4 = (_Bool)1;
long long int var_9 = -2134334289465178822LL;
int zero = 0;
unsigned int var_14 = 1800473539U;
int var_15 = -1658076901;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
