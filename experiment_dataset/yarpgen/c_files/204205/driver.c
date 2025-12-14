#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1521061238;
unsigned short var_7 = (unsigned short)16804;
int var_8 = -1951151032;
unsigned short var_9 = (unsigned short)47459;
int var_10 = -321355907;
int zero = 0;
int var_19 = 1340516868;
signed char var_20 = (signed char)-39;
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
