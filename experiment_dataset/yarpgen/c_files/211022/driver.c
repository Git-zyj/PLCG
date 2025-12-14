#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11656160470969441931ULL;
signed char var_9 = (signed char)111;
unsigned char var_11 = (unsigned char)176;
unsigned long long int var_13 = 4740149460882549025ULL;
short var_15 = (short)-12028;
unsigned char var_18 = (unsigned char)167;
int zero = 0;
signed char var_19 = (signed char)114;
int var_20 = 87866863;
signed char var_21 = (signed char)-111;
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
