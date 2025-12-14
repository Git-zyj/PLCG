#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2819020335910425343LL;
unsigned char var_1 = (unsigned char)138;
short var_2 = (short)21791;
int var_3 = -617858827;
unsigned short var_5 = (unsigned short)40074;
unsigned short var_6 = (unsigned short)14644;
short var_8 = (short)-28926;
signed char var_9 = (signed char)22;
short var_10 = (short)10039;
int zero = 0;
short var_11 = (short)25837;
unsigned long long int var_12 = 2132036464381089077ULL;
short var_13 = (short)-27074;
void init() {
}

void checksum() {
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
