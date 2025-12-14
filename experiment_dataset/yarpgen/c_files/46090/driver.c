#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2005325779U;
unsigned long long int var_2 = 12209227214179691618ULL;
int var_4 = 417528726;
unsigned long long int var_6 = 3509879906917588588ULL;
signed char var_7 = (signed char)106;
unsigned long long int var_8 = 2449727780693018261ULL;
unsigned int var_9 = 3773816647U;
long long int var_10 = -7382918324825473703LL;
unsigned int var_12 = 2614749707U;
int zero = 0;
unsigned short var_13 = (unsigned short)44541;
signed char var_14 = (signed char)-41;
unsigned short var_15 = (unsigned short)58277;
unsigned short var_16 = (unsigned short)61615;
unsigned int var_17 = 1375047800U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
