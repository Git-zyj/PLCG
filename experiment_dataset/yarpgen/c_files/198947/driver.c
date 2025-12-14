#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)-73;
unsigned long long int var_16 = 11262271544506262262ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)121;
unsigned char var_19 = (unsigned char)45;
long long int var_20 = -36991522927887420LL;
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
