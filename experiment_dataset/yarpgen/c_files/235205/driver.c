#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3737593575U;
unsigned long long int var_3 = 7903425320203576439ULL;
signed char var_7 = (signed char)-18;
long long int var_8 = -2700002450671366148LL;
int zero = 0;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3492128844U;
void init() {
}

void checksum() {
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
