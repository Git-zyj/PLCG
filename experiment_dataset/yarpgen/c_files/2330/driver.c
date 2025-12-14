#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)46;
unsigned char var_3 = (unsigned char)105;
_Bool var_9 = (_Bool)0;
int var_10 = 920376879;
signed char var_11 = (signed char)104;
unsigned long long int var_14 = 17704581041000672446ULL;
_Bool var_15 = (_Bool)0;
long long int var_16 = -3276495670843508782LL;
unsigned char var_19 = (unsigned char)197;
int zero = 0;
short var_20 = (short)26560;
signed char var_21 = (signed char)-90;
_Bool var_22 = (_Bool)0;
signed char var_23 = (signed char)81;
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
