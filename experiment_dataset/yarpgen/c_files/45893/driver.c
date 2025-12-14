#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 14298183395819956534ULL;
unsigned char var_4 = (unsigned char)27;
unsigned short var_6 = (unsigned short)37417;
unsigned int var_7 = 1820643481U;
short var_10 = (short)20442;
int zero = 0;
short var_12 = (short)-19874;
signed char var_13 = (signed char)-34;
void init() {
}

void checksum() {
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
