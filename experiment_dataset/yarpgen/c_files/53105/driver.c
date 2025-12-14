#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1529344503603181410LL;
signed char var_2 = (signed char)106;
unsigned char var_3 = (unsigned char)61;
long long int var_17 = 2115702086990766036LL;
int zero = 0;
short var_18 = (short)-8079;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 6993620227841635449ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
