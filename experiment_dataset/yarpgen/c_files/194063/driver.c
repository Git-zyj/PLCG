#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-45;
int var_5 = -1949491077;
signed char var_9 = (signed char)86;
unsigned short var_10 = (unsigned short)51938;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)58116;
unsigned long long int var_13 = 14522791901430312667ULL;
short var_14 = (short)-29186;
int var_17 = -1256737262;
int zero = 0;
signed char var_18 = (signed char)-110;
unsigned char var_19 = (unsigned char)46;
int var_20 = -756662310;
long long int var_21 = -8288820264286284144LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
