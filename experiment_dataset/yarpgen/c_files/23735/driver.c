#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)181;
long long int var_6 = 3431708967797935917LL;
long long int var_9 = 8548270330172076049LL;
unsigned long long int var_11 = 1689654502899720694ULL;
long long int var_12 = -3030326394840698114LL;
int zero = 0;
signed char var_14 = (signed char)-70;
unsigned int var_15 = 2892812033U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
