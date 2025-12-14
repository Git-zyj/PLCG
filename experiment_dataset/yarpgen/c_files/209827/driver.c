#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4933105667784298932LL;
int var_9 = -1849457059;
int zero = 0;
unsigned char var_17 = (unsigned char)174;
unsigned char var_18 = (unsigned char)57;
unsigned long long int var_19 = 8966241296718669299ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
