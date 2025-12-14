#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)217;
signed char var_3 = (signed char)5;
short var_5 = (short)9683;
long long int var_6 = 7680328921170921354LL;
short var_7 = (short)10700;
unsigned short var_8 = (unsigned short)50354;
unsigned long long int var_11 = 11926097410298156267ULL;
unsigned char var_12 = (unsigned char)228;
unsigned long long int var_14 = 518849801063186527ULL;
unsigned long long int var_15 = 16774202355756171045ULL;
short var_16 = (short)17092;
unsigned long long int var_17 = 13110719414086981431ULL;
long long int var_18 = 8096479991546984464LL;
int zero = 0;
unsigned int var_19 = 127644549U;
short var_20 = (short)2896;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
