#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-85;
unsigned char var_1 = (unsigned char)90;
unsigned char var_7 = (unsigned char)170;
unsigned char var_8 = (unsigned char)76;
unsigned long long int var_9 = 12196666130159785448ULL;
int zero = 0;
int var_10 = 629200640;
int var_11 = 808272739;
unsigned int var_12 = 3598109679U;
int var_13 = 1361491522;
unsigned short var_14 = (unsigned short)4974;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
