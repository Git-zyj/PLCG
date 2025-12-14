#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4909020656193331932LL;
unsigned int var_2 = 854239614U;
unsigned char var_6 = (unsigned char)171;
int zero = 0;
unsigned short var_16 = (unsigned short)28980;
long long int var_17 = 4598065420043488433LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
