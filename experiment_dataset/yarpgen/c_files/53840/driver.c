#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2729425528557965883ULL;
short var_1 = (short)21089;
unsigned long long int var_2 = 4151938739548883715ULL;
unsigned int var_4 = 1146072880U;
unsigned long long int var_6 = 5265244592289901763ULL;
signed char var_7 = (signed char)70;
unsigned char var_8 = (unsigned char)0;
unsigned char var_9 = (unsigned char)34;
int zero = 0;
unsigned short var_11 = (unsigned short)8170;
long long int var_12 = -492404942026202244LL;
short var_13 = (short)-22453;
short var_14 = (short)13676;
unsigned long long int var_15 = 2993905973322747254ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
