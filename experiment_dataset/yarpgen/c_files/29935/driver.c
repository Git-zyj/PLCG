#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)81;
unsigned char var_1 = (unsigned char)201;
unsigned char var_2 = (unsigned char)27;
unsigned long long int var_5 = 4761217911229393543ULL;
unsigned char var_7 = (unsigned char)128;
unsigned long long int var_12 = 5620248420365166881ULL;
int zero = 0;
unsigned long long int var_18 = 12589632698708859956ULL;
unsigned char var_19 = (unsigned char)93;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
