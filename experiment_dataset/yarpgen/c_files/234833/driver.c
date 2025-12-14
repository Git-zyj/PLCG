#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 901572181U;
unsigned int var_1 = 3929070888U;
long long int var_3 = 5896403991853431277LL;
unsigned int var_4 = 1566526051U;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)54219;
long long int var_7 = -5128838989655326168LL;
signed char var_8 = (signed char)-11;
short var_9 = (short)-20295;
long long int var_10 = 490673622880182541LL;
unsigned short var_12 = (unsigned short)64122;
unsigned char var_13 = (unsigned char)159;
long long int var_14 = 6603489295796775546LL;
int var_15 = 675328528;
long long int var_16 = -2013704079852827047LL;
int zero = 0;
unsigned int var_17 = 69817640U;
unsigned char var_18 = (unsigned char)192;
signed char var_19 = (signed char)79;
unsigned char var_20 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
