#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-121;
signed char var_10 = (signed char)85;
unsigned char var_11 = (unsigned char)195;
int var_15 = -1536540081;
signed char var_17 = (signed char)80;
signed char var_19 = (signed char)98;
int zero = 0;
int var_20 = 211570555;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-116;
signed char var_23 = (signed char)77;
int var_24 = 1789865009;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
