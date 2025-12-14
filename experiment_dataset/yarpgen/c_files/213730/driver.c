#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)4870;
unsigned long long int var_6 = 3930772210672503179ULL;
unsigned short var_7 = (unsigned short)11254;
unsigned long long int var_9 = 15601337446262796058ULL;
signed char var_14 = (signed char)40;
unsigned char var_16 = (unsigned char)111;
int zero = 0;
long long int var_19 = -2163472496959288103LL;
unsigned char var_20 = (unsigned char)34;
short var_21 = (short)14185;
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
