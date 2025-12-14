#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)120;
unsigned char var_13 = (unsigned char)164;
_Bool var_16 = (_Bool)1;
int zero = 0;
long long int var_19 = 4157043997312645508LL;
long long int var_20 = 6521555862154742321LL;
unsigned short var_21 = (unsigned short)32569;
void init() {
}

void checksum() {
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
