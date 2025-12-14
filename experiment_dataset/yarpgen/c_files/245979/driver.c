#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)45300;
unsigned long long int var_1 = 15804129686087653716ULL;
long long int var_2 = 524916808492922396LL;
int var_5 = -123736129;
unsigned long long int var_7 = 17132184834229875709ULL;
unsigned long long int var_8 = 3618027713212274337ULL;
short var_9 = (short)168;
unsigned short var_10 = (unsigned short)10233;
int zero = 0;
unsigned long long int var_11 = 2394498674780816816ULL;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
