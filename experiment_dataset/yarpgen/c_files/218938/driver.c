#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = 3381151059437845206LL;
long long int var_9 = 6850016524857228693LL;
short var_12 = (short)-27836;
int zero = 0;
unsigned long long int var_14 = 2572190985432617450ULL;
short var_15 = (short)-11178;
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
