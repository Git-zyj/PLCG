#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -5223810910744566046LL;
unsigned short var_1 = (unsigned short)50064;
signed char var_2 = (signed char)37;
short var_3 = (short)21442;
int var_4 = -403631070;
long long int var_5 = 7797361722650772056LL;
unsigned short var_6 = (unsigned short)14090;
short var_7 = (short)317;
unsigned short var_8 = (unsigned short)21245;
signed char var_9 = (signed char)-124;
unsigned char var_10 = (unsigned char)31;
signed char var_11 = (signed char)-17;
unsigned int var_12 = 3521586093U;
int zero = 0;
short var_13 = (short)32197;
short var_14 = (short)31112;
void init() {
}

void checksum() {
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
