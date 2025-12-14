#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)142;
unsigned char var_9 = (unsigned char)135;
unsigned char var_10 = (unsigned char)109;
int zero = 0;
long long int var_13 = 1244508676193068796LL;
unsigned char var_14 = (unsigned char)138;
unsigned char var_15 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
