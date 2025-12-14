#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)13;
int var_1 = 792481162;
short var_2 = (short)-20844;
unsigned char var_3 = (unsigned char)12;
int var_5 = -1410378135;
signed char var_7 = (signed char)-111;
long long int var_9 = 1407786022973881152LL;
int zero = 0;
long long int var_10 = 68085722789379903LL;
unsigned long long int var_11 = 17941878139746657741ULL;
int var_12 = 416059776;
int var_13 = 1615308633;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
