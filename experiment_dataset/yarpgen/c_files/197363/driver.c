#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 9961803616940657750ULL;
signed char var_4 = (signed char)-85;
signed char var_5 = (signed char)52;
int zero = 0;
long long int var_18 = 6967766703011540592LL;
unsigned char var_19 = (unsigned char)142;
long long int var_20 = 5816978484780307890LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
