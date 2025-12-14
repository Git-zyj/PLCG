#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)130;
signed char var_3 = (signed char)-78;
long long int var_4 = -3148483950350212519LL;
long long int var_5 = 4604445354457951503LL;
signed char var_6 = (signed char)-37;
unsigned char var_7 = (unsigned char)179;
int var_11 = 93850171;
unsigned short var_13 = (unsigned short)12941;
int zero = 0;
int var_17 = 275570040;
signed char var_18 = (signed char)-16;
unsigned short var_19 = (unsigned short)53795;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
