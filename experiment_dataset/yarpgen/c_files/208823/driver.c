#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 8638638751948779503LL;
int var_7 = -268763233;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)151;
int zero = 0;
int var_17 = -1046074557;
unsigned int var_18 = 644861301U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
