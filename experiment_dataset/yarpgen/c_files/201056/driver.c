#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_8 = (signed char)-102;
unsigned char var_9 = (unsigned char)170;
unsigned char var_11 = (unsigned char)214;
int zero = 0;
long long int var_17 = 3147401200657223345LL;
unsigned long long int var_18 = 18018446614684171816ULL;
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
