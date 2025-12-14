#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1402928414;
unsigned short var_2 = (unsigned short)64967;
signed char var_3 = (signed char)-99;
unsigned int var_4 = 2802842155U;
int var_5 = -638701793;
unsigned int var_8 = 3935190842U;
unsigned long long int var_9 = 7394678437941147986ULL;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3290062164U;
unsigned long long int var_13 = 14208590074826518752ULL;
unsigned long long int var_15 = 16200354781599417554ULL;
unsigned int var_16 = 4286040570U;
int zero = 0;
unsigned long long int var_17 = 6228158002756736963ULL;
unsigned char var_18 = (unsigned char)10;
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
