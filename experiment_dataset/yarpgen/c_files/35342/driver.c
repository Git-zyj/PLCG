#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10298119594694667479ULL;
unsigned long long int var_4 = 10002068491596354475ULL;
unsigned char var_6 = (unsigned char)223;
int zero = 0;
int var_17 = 1308073362;
unsigned int var_18 = 4125557099U;
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
