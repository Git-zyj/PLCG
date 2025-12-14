#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-25;
unsigned char var_4 = (unsigned char)155;
int var_5 = 112468821;
unsigned char var_7 = (unsigned char)249;
signed char var_9 = (signed char)-96;
int zero = 0;
long long int var_10 = -5003309655212602562LL;
unsigned short var_11 = (unsigned short)31459;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
