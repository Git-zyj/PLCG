#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)32067;
long long int var_1 = 4581002248011666198LL;
int var_2 = -126014266;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-27646;
signed char var_5 = (signed char)82;
long long int var_6 = 5516265282546605166LL;
short var_7 = (short)23359;
long long int var_8 = -4138925342612469821LL;
int zero = 0;
unsigned char var_11 = (unsigned char)116;
unsigned char var_12 = (unsigned char)139;
unsigned int var_13 = 963575433U;
unsigned long long int var_14 = 6377458412436674534ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
