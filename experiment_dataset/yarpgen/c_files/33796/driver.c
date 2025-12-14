#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_3 = (signed char)121;
unsigned long long int var_4 = 17506893786197254379ULL;
unsigned long long int var_5 = 8807417109913280421ULL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_10 = 7660737777932131845ULL;
unsigned short var_12 = (unsigned short)4330;
unsigned char var_16 = (unsigned char)85;
unsigned long long int var_17 = 7945939694971473604ULL;
int zero = 0;
unsigned long long int var_18 = 15118255627258059235ULL;
unsigned short var_19 = (unsigned short)62999;
unsigned long long int var_20 = 8676865209378039617ULL;
void init() {
}

void checksum() {
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
