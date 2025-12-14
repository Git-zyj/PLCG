#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_9 = (signed char)114;
long long int var_10 = 3474171084754985149LL;
signed char var_11 = (signed char)-16;
signed char var_13 = (signed char)7;
unsigned short var_15 = (unsigned short)55478;
int zero = 0;
long long int var_19 = -5760563776763790992LL;
long long int var_20 = 6508822703532678415LL;
unsigned char var_21 = (unsigned char)183;
long long int var_22 = -321468834428802845LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
