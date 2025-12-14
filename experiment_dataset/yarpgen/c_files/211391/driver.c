#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17110988284840434922ULL;
long long int var_4 = -7963781993824485929LL;
short var_6 = (short)30191;
unsigned long long int var_7 = 1052778217572592713ULL;
int var_10 = 1525911879;
unsigned char var_11 = (unsigned char)239;
signed char var_12 = (signed char)-57;
signed char var_16 = (signed char)123;
int zero = 0;
unsigned long long int var_17 = 16706237603990891377ULL;
unsigned char var_18 = (unsigned char)75;
signed char var_19 = (signed char)-95;
long long int var_20 = -3598324138320812969LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
