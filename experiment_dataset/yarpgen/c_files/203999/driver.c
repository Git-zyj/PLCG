#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_8 = 6869460333258854367ULL;
unsigned short var_9 = (unsigned short)31428;
unsigned short var_11 = (unsigned short)41994;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)19577;
unsigned int var_20 = 2164011056U;
signed char var_21 = (signed char)-120;
unsigned int var_22 = 2013645546U;
unsigned short var_23 = (unsigned short)36444;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
