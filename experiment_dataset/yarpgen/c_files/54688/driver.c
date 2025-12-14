#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)9;
unsigned char var_1 = (unsigned char)143;
long long int var_3 = 3148196534180887949LL;
signed char var_4 = (signed char)-57;
long long int var_7 = -6068457446318678788LL;
unsigned long long int var_8 = 7893230099827164576ULL;
unsigned char var_11 = (unsigned char)141;
int zero = 0;
signed char var_12 = (signed char)-33;
int var_13 = 557551895;
long long int var_14 = 8196086801023581071LL;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
