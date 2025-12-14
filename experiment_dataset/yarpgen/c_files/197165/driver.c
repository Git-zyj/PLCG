#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2906564464641241015LL;
unsigned int var_1 = 752657555U;
unsigned short var_2 = (unsigned short)317;
signed char var_3 = (signed char)122;
signed char var_5 = (signed char)55;
unsigned short var_6 = (unsigned short)47150;
long long int var_9 = -5449750106401948026LL;
int var_18 = 69071664;
int zero = 0;
unsigned int var_19 = 4174906293U;
signed char var_20 = (signed char)106;
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
