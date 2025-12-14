#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
signed char var_5 = (signed char)-73;
int var_9 = 601726393;
unsigned int var_12 = 909239888U;
short var_13 = (short)28630;
int zero = 0;
unsigned long long int var_17 = 6831346899103418014ULL;
long long int var_18 = -2546494830121010771LL;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 319606961U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
