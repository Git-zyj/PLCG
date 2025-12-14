#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4426792922666070750ULL;
signed char var_4 = (signed char)82;
_Bool var_5 = (_Bool)0;
short var_8 = (short)26389;
unsigned long long int var_12 = 3083837293715870201ULL;
_Bool var_14 = (_Bool)0;
long long int var_17 = -749329294934923353LL;
int zero = 0;
unsigned char var_18 = (unsigned char)62;
long long int var_19 = -7430390289143538621LL;
short var_20 = (short)11901;
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
