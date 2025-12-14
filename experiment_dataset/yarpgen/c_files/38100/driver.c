#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)51521;
unsigned int var_6 = 3377472894U;
long long int var_7 = -630858582396932989LL;
unsigned char var_8 = (unsigned char)20;
short var_9 = (short)14577;
unsigned short var_10 = (unsigned short)16343;
int var_11 = 1730367622;
short var_13 = (short)14569;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 3835719109740963496ULL;
long long int var_16 = -5149187880096279307LL;
int zero = 0;
unsigned char var_17 = (unsigned char)68;
unsigned long long int var_18 = 64550480438828511ULL;
unsigned short var_19 = (unsigned short)45288;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
