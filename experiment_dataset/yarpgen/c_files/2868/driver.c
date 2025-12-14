#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)96;
long long int var_4 = 3273156775233381568LL;
unsigned short var_6 = (unsigned short)47675;
unsigned char var_8 = (unsigned char)205;
signed char var_11 = (signed char)-37;
int zero = 0;
long long int var_12 = -5417619840975183530LL;
long long int var_13 = 7343075023365495330LL;
signed char var_14 = (signed char)-103;
void init() {
}

void checksum() {
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
