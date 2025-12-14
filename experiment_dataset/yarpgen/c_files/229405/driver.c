#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1850595370;
int var_5 = 2001586810;
unsigned short var_6 = (unsigned short)16671;
int var_7 = 272630270;
unsigned short var_9 = (unsigned short)12677;
unsigned short var_10 = (unsigned short)26630;
int var_12 = -1668241067;
signed char var_18 = (signed char)-80;
unsigned short var_19 = (unsigned short)6550;
int zero = 0;
long long int var_20 = -7485802042233939104LL;
unsigned long long int var_21 = 7761913715910376490ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
