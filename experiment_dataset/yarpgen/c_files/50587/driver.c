#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)195;
signed char var_3 = (signed char)62;
unsigned long long int var_9 = 13620471456775481947ULL;
unsigned long long int var_13 = 12726721928970000260ULL;
signed char var_17 = (signed char)112;
unsigned long long int var_18 = 5931778460831727815ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)142;
unsigned long long int var_20 = 5871779333958357394ULL;
void init() {
}

void checksum() {
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
