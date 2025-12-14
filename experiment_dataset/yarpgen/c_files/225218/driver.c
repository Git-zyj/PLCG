#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-74;
unsigned int var_3 = 1123582908U;
unsigned long long int var_4 = 12448723229599163427ULL;
unsigned long long int var_5 = 10552633129330926557ULL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_9 = 5633192649248131256ULL;
int zero = 0;
long long int var_13 = -8061274557057805689LL;
unsigned long long int var_14 = 10407935333179926957ULL;
long long int var_15 = -194666835525851565LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
