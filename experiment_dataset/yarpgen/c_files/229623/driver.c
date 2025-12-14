#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)150;
unsigned long long int var_1 = 12180874888967786683ULL;
signed char var_2 = (signed char)-112;
_Bool var_4 = (_Bool)1;
short var_5 = (short)-2392;
unsigned char var_8 = (unsigned char)25;
long long int var_9 = -5072974287549226629LL;
int zero = 0;
_Bool var_11 = (_Bool)0;
long long int var_12 = 7964335791979936859LL;
unsigned short var_13 = (unsigned short)38761;
unsigned char var_14 = (unsigned char)142;
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
