#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8543812565439161366ULL;
long long int var_2 = -2579423997967568400LL;
signed char var_4 = (signed char)124;
int var_7 = 323667698;
int var_9 = -422880231;
int var_10 = -618064148;
unsigned short var_13 = (unsigned short)38784;
int zero = 0;
int var_14 = -617005659;
signed char var_15 = (signed char)-64;
unsigned char var_16 = (unsigned char)209;
long long int var_17 = 3458904768635435046LL;
int var_18 = -652856902;
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
