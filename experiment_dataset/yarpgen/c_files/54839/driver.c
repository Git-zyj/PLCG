#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)5;
signed char var_10 = (signed char)-45;
signed char var_14 = (signed char)-112;
long long int var_16 = 3774948384232488106LL;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = 787784501727626005LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
