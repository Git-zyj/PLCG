#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6707791616814797015ULL;
long long int var_15 = 8927253175289215274LL;
long long int var_17 = -1100655886976928982LL;
int zero = 0;
long long int var_20 = 2392910446072173619LL;
unsigned int var_21 = 3142553751U;
int var_22 = -891356508;
void init() {
}

void checksum() {
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
