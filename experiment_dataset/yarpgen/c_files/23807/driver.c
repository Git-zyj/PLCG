#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)136;
unsigned long long int var_10 = 6988237326903274480ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)217;
unsigned long long int var_15 = 4265435411587188126ULL;
unsigned long long int var_16 = 13082607949450343834ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
