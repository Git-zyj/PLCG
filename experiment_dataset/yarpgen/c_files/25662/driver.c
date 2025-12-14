#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)129;
int var_1 = -148627780;
long long int var_2 = -3051147360389903831LL;
unsigned char var_3 = (unsigned char)140;
unsigned short var_4 = (unsigned short)6069;
int var_5 = 1917199725;
int var_6 = -1177040007;
int var_7 = 750232739;
long long int var_8 = 5436341746560025559LL;
unsigned long long int var_10 = 9614393543072366113ULL;
signed char var_11 = (signed char)-125;
int zero = 0;
signed char var_12 = (signed char)-97;
long long int var_13 = -2424187048350871538LL;
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
