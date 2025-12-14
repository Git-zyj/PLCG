#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8970501945055778553ULL;
long long int var_9 = 5222555531257740880LL;
int zero = 0;
unsigned long long int var_11 = 18252131830404387430ULL;
unsigned short var_12 = (unsigned short)36177;
void init() {
}

void checksum() {
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
