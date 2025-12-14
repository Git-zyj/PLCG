#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2235967871U;
unsigned int var_3 = 4221391209U;
unsigned int var_5 = 2306807804U;
short var_6 = (short)-340;
unsigned char var_7 = (unsigned char)101;
short var_8 = (short)-4613;
unsigned long long int var_9 = 12303359401423287187ULL;
unsigned long long int var_10 = 6413562665095130622ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)224;
unsigned char var_13 = (unsigned char)225;
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
