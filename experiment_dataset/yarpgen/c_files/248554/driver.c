#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6281994627735915409LL;
short var_5 = (short)-2872;
long long int var_8 = -791552183095515335LL;
long long int var_9 = 3917019070288340874LL;
long long int var_12 = 9117570652450225379LL;
int zero = 0;
unsigned int var_16 = 4085521855U;
unsigned char var_17 = (unsigned char)230;
unsigned int var_18 = 2665887842U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
