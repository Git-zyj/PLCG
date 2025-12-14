#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4342;
unsigned char var_2 = (unsigned char)8;
long long int var_3 = 4365228322600122946LL;
unsigned char var_4 = (unsigned char)142;
unsigned int var_5 = 1552115832U;
unsigned char var_8 = (unsigned char)4;
long long int var_9 = -8735968697028040472LL;
int zero = 0;
short var_10 = (short)10789;
short var_11 = (short)7371;
long long int var_12 = 3254944206035911861LL;
unsigned int var_13 = 3614418894U;
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
