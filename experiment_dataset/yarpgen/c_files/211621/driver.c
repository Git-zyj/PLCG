#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)22205;
unsigned short var_2 = (unsigned short)19932;
long long int var_3 = -209690154643456486LL;
unsigned short var_5 = (unsigned short)4036;
unsigned short var_14 = (unsigned short)31289;
int zero = 0;
unsigned int var_17 = 3502034367U;
short var_18 = (short)30469;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
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
