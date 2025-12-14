#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)26753;
long long int var_4 = 4745870769796429624LL;
unsigned long long int var_5 = 4208592231469275899ULL;
unsigned long long int var_7 = 9302877305749687208ULL;
int zero = 0;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 3771019539674465382ULL;
unsigned short var_12 = (unsigned short)46990;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
