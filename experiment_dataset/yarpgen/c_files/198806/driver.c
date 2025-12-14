#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11250694787710449356ULL;
_Bool var_2 = (_Bool)1;
int var_3 = -972853838;
unsigned long long int var_4 = 13237472625721724013ULL;
long long int var_5 = -8456763938762619020LL;
unsigned char var_6 = (unsigned char)4;
unsigned int var_8 = 3579080125U;
unsigned char var_9 = (unsigned char)9;
int zero = 0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)11335;
unsigned long long int var_13 = 7137949710817156904ULL;
_Bool var_14 = (_Bool)1;
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
