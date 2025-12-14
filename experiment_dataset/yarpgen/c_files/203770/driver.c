#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1733153833551324872ULL;
unsigned long long int var_5 = 5343055710903618010ULL;
unsigned short var_9 = (unsigned short)10670;
int zero = 0;
long long int var_11 = -2793154560098827400LL;
signed char var_12 = (signed char)-12;
unsigned int var_13 = 693242212U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
