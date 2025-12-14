#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
unsigned int var_1 = 3005167500U;
unsigned char var_2 = (unsigned char)37;
unsigned int var_3 = 4099247561U;
signed char var_5 = (signed char)-101;
signed char var_6 = (signed char)-14;
unsigned long long int var_8 = 3081720921233819872ULL;
signed char var_9 = (signed char)126;
int zero = 0;
_Bool var_11 = (_Bool)0;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
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
