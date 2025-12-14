#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17650;
unsigned char var_4 = (unsigned char)14;
long long int var_5 = -6019712815495041061LL;
signed char var_7 = (signed char)-57;
unsigned short var_10 = (unsigned short)23285;
unsigned long long int var_16 = 3509663800043868844ULL;
long long int var_17 = 8195478902130023111LL;
unsigned char var_18 = (unsigned char)220;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = -1433466987;
int var_22 = 218757588;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
