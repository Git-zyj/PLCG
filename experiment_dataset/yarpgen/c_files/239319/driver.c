#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-32;
short var_3 = (short)22983;
int var_4 = 514177159;
long long int var_7 = -7233483316194924642LL;
unsigned long long int var_8 = 3091717463540749634ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)48883;
short var_14 = (short)28552;
unsigned long long int var_15 = 428587368963505486ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
