#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 699226634932981289LL;
long long int var_9 = -6463017303001774684LL;
unsigned char var_10 = (unsigned char)167;
unsigned char var_12 = (unsigned char)77;
signed char var_16 = (signed char)-72;
int zero = 0;
unsigned long long int var_17 = 15190669672597580474ULL;
long long int var_18 = 7162341348469677881LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
