#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5957624421587640112ULL;
short var_3 = (short)-3671;
unsigned int var_4 = 4213228025U;
long long int var_6 = 438794441861389933LL;
unsigned short var_9 = (unsigned short)46818;
unsigned long long int var_10 = 8368013110350324011ULL;
short var_11 = (short)25610;
int zero = 0;
signed char var_13 = (signed char)-120;
long long int var_14 = 888327167677144425LL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
