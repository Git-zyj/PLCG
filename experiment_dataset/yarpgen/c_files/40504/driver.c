#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)28;
unsigned int var_4 = 1241078073U;
int var_6 = -1507901726;
long long int var_9 = -4500330061035521857LL;
int zero = 0;
signed char var_17 = (signed char)98;
unsigned short var_18 = (unsigned short)20012;
int var_19 = 874316843;
void init() {
}

void checksum() {
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
