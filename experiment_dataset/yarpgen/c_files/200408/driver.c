#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2905027898428635732LL;
short var_5 = (short)2923;
unsigned long long int var_9 = 2774360909484356452ULL;
unsigned long long int var_12 = 7197853261460739042ULL;
unsigned long long int var_14 = 5574425718858143513ULL;
long long int var_16 = 4308160795033989069LL;
int zero = 0;
unsigned long long int var_17 = 16820080796658462700ULL;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
