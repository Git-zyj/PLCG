#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4805328140994585630LL;
unsigned int var_1 = 844520198U;
long long int var_4 = 3661458964576776351LL;
unsigned int var_5 = 3549861098U;
signed char var_6 = (signed char)42;
unsigned short var_9 = (unsigned short)3439;
unsigned char var_11 = (unsigned char)154;
long long int var_12 = -3472117917072429341LL;
long long int var_13 = -555649738963948711LL;
int zero = 0;
_Bool var_17 = (_Bool)1;
long long int var_18 = -3371064269471885526LL;
unsigned long long int var_19 = 17863167825436695264ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
