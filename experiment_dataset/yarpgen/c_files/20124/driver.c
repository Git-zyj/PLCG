#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)37806;
long long int var_4 = 6166668459373040724LL;
signed char var_6 = (signed char)106;
long long int var_11 = 3571236738528392622LL;
unsigned long long int var_12 = 11400461203367191530ULL;
unsigned short var_18 = (unsigned short)17118;
int zero = 0;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)106;
long long int var_22 = -2644188501517395012LL;
long long int var_23 = -6891224851516445266LL;
signed char var_24 = (signed char)-2;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
