#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4780311355775634960LL;
unsigned char var_1 = (unsigned char)251;
long long int var_4 = 8067365843636393001LL;
long long int var_8 = 3642966299261204488LL;
unsigned char var_13 = (unsigned char)18;
int zero = 0;
unsigned char var_17 = (unsigned char)191;
long long int var_18 = -1543444554259830183LL;
unsigned long long int var_19 = 10144644746462597024ULL;
unsigned long long int var_20 = 16521438191468139351ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
