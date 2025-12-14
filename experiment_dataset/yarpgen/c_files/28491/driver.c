#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -799817964204728209LL;
unsigned long long int var_2 = 5038839002176816719ULL;
long long int var_6 = 4938128471949492923LL;
unsigned int var_11 = 1305499116U;
int zero = 0;
unsigned int var_16 = 373496411U;
unsigned short var_17 = (unsigned short)26548;
unsigned char var_18 = (unsigned char)21;
signed char var_19 = (signed char)67;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
