#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)-126;
int var_7 = 1327063685;
unsigned long long int var_16 = 9447100733199848959ULL;
unsigned long long int var_17 = 13021490188521511828ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)47;
unsigned short var_20 = (unsigned short)45287;
int var_21 = -16219293;
unsigned long long int var_22 = 13960107010264764914ULL;
long long int var_23 = 5654511168602105576LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
