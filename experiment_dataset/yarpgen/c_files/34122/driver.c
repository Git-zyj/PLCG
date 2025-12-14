#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-21955;
short var_3 = (short)-317;
int var_5 = -1326859668;
short var_7 = (short)-28250;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 7217851324594825733ULL;
signed char var_11 = (signed char)53;
long long int var_12 = -3729809945226024443LL;
signed char var_15 = (signed char)86;
int zero = 0;
signed char var_17 = (signed char)-34;
unsigned char var_18 = (unsigned char)229;
_Bool var_19 = (_Bool)0;
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
