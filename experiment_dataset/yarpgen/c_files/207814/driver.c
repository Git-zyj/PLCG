#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)11477;
int var_3 = -1818412075;
_Bool var_5 = (_Bool)1;
short var_10 = (short)9447;
short var_12 = (short)8776;
long long int var_15 = 5043170883787818159LL;
int zero = 0;
long long int var_19 = 5349416844935031254LL;
long long int var_20 = 6552890060978567975LL;
unsigned short var_21 = (unsigned short)31272;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
