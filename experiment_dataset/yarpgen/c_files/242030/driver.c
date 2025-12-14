#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5968851342545251876LL;
unsigned long long int var_3 = 10325291484987735430ULL;
long long int var_10 = 728011701228548022LL;
int zero = 0;
unsigned int var_19 = 3067395711U;
unsigned char var_20 = (unsigned char)0;
signed char var_21 = (signed char)-27;
signed char var_22 = (signed char)-52;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
