#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1077161963835712032LL;
unsigned char var_2 = (unsigned char)50;
unsigned int var_6 = 1303654626U;
unsigned int var_8 = 3781794909U;
unsigned short var_9 = (unsigned short)51808;
unsigned char var_11 = (unsigned char)109;
signed char var_13 = (signed char)94;
unsigned char var_16 = (unsigned char)160;
int zero = 0;
unsigned char var_17 = (unsigned char)90;
int var_18 = 1383000609;
long long int var_19 = -2438821893919855641LL;
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
