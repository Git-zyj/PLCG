#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 1439121060440539576LL;
signed char var_5 = (signed char)-23;
long long int var_9 = -3973692911043433779LL;
unsigned long long int var_12 = 9115089391466643782ULL;
int zero = 0;
long long int var_19 = -1528774064560025637LL;
signed char var_20 = (signed char)23;
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
