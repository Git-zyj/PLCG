#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2143420213543976961LL;
unsigned char var_1 = (unsigned char)235;
long long int var_3 = -7755471897132048841LL;
short var_4 = (short)11746;
short var_5 = (short)-318;
short var_6 = (short)3411;
signed char var_7 = (signed char)-48;
long long int var_8 = -2770869455593094928LL;
signed char var_9 = (signed char)125;
short var_10 = (short)1110;
int zero = 0;
unsigned char var_12 = (unsigned char)255;
short var_13 = (short)-25038;
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
