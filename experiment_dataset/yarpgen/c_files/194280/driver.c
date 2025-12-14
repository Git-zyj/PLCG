#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -792286694223739359LL;
unsigned int var_5 = 576019656U;
unsigned short var_7 = (unsigned short)32643;
unsigned long long int var_8 = 12463286777639475970ULL;
unsigned short var_10 = (unsigned short)15720;
unsigned long long int var_12 = 9990889493311880990ULL;
int zero = 0;
unsigned long long int var_13 = 12522912106924933644ULL;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
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
