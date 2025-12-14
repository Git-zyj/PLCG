#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54555;
int var_2 = 602119953;
unsigned int var_3 = 2605339296U;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
unsigned short var_8 = (unsigned short)3758;
short var_11 = (short)-3490;
unsigned short var_12 = (unsigned short)62890;
unsigned short var_13 = (unsigned short)19660;
int zero = 0;
long long int var_15 = -1169065123216259989LL;
_Bool var_16 = (_Bool)1;
long long int var_17 = -6443454364878614955LL;
int var_18 = 1638122293;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
