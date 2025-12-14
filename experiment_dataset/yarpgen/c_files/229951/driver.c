#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2013912227U;
short var_3 = (short)18628;
unsigned int var_8 = 323962059U;
int zero = 0;
unsigned long long int var_12 = 167674745984167703ULL;
unsigned int var_13 = 3117405895U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
