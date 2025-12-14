#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7076658575753653070LL;
unsigned int var_1 = 3821643377U;
unsigned short var_2 = (unsigned short)31796;
unsigned int var_4 = 2053009179U;
signed char var_5 = (signed char)-85;
unsigned char var_6 = (unsigned char)108;
unsigned long long int var_7 = 6226142960672462026ULL;
signed char var_9 = (signed char)-109;
unsigned short var_10 = (unsigned short)12508;
int zero = 0;
unsigned char var_11 = (unsigned char)3;
unsigned short var_12 = (unsigned short)25652;
short var_13 = (short)6885;
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
