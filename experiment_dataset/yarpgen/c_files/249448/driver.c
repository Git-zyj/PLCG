#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5167379704717410493ULL;
long long int var_7 = 291035129853421299LL;
unsigned char var_9 = (unsigned char)0;
long long int var_11 = 3766210821503458830LL;
int zero = 0;
unsigned long long int var_14 = 6682031249724391073ULL;
signed char var_15 = (signed char)-20;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
