#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)22;
unsigned int var_9 = 4122715866U;
long long int var_11 = -5954459369723061225LL;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = 3038332011626381599LL;
short var_20 = (short)13927;
short var_21 = (short)32556;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
