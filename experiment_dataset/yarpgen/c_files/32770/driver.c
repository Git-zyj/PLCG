#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1157909961;
int var_2 = -1947929585;
int var_3 = 252876322;
unsigned int var_4 = 1725728438U;
unsigned char var_5 = (unsigned char)176;
unsigned char var_6 = (unsigned char)177;
short var_10 = (short)-20749;
int var_12 = -101362524;
short var_13 = (short)18179;
int var_14 = 2118409596;
unsigned long long int var_15 = 1277634670606175070ULL;
signed char var_19 = (signed char)71;
int zero = 0;
unsigned int var_20 = 4101855860U;
int var_21 = 363867653;
unsigned char var_22 = (unsigned char)28;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
