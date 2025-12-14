#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)5196;
unsigned int var_4 = 1216613115U;
unsigned int var_6 = 1853941936U;
unsigned long long int var_9 = 17436038203614405172ULL;
int zero = 0;
unsigned int var_10 = 2081503294U;
short var_11 = (short)-5415;
unsigned long long int var_12 = 5238960325228220090ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
