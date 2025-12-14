#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)214;
unsigned char var_9 = (unsigned char)211;
unsigned char var_10 = (unsigned char)177;
int zero = 0;
unsigned char var_14 = (unsigned char)71;
long long int var_15 = 7192325657047984609LL;
unsigned short var_16 = (unsigned short)34506;
long long int var_17 = 8349912723062357933LL;
long long int var_18 = -4494121563598383584LL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
