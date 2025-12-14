#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)225;
long long int var_2 = -4138959579301763241LL;
unsigned char var_4 = (unsigned char)115;
signed char var_5 = (signed char)68;
signed char var_8 = (signed char)38;
int var_9 = -1260069538;
signed char var_10 = (signed char)45;
signed char var_11 = (signed char)-19;
signed char var_13 = (signed char)-52;
long long int var_14 = 1666299628522431467LL;
int zero = 0;
int var_18 = -1418545801;
unsigned char var_19 = (unsigned char)245;
long long int var_20 = -5596161050397224970LL;
int var_21 = 323599412;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
