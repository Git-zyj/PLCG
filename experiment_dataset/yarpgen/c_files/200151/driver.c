#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26569;
short var_2 = (short)-3514;
unsigned long long int var_3 = 17790652526749131627ULL;
unsigned long long int var_6 = 8445420837015476294ULL;
unsigned long long int var_7 = 6855854762675373937ULL;
unsigned long long int var_8 = 17057883835248911414ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 266837031U;
_Bool var_16 = (_Bool)1;
_Bool var_19 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 11295751156668004417ULL;
unsigned short var_21 = (unsigned short)30368;
short var_22 = (short)10897;
unsigned long long int var_23 = 12901382203368073340ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
