#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)40265;
short var_12 = (short)12902;
unsigned long long int var_13 = 16409664251685522874ULL;
int zero = 0;
unsigned long long int var_16 = 17107661469437544623ULL;
unsigned int var_17 = 250522929U;
unsigned short var_18 = (unsigned short)39096;
unsigned int var_19 = 1905215948U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
