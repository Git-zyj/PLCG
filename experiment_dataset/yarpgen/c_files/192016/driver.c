#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -3013044013539202966LL;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 4229755850U;
unsigned long long int var_4 = 1375614599633088545ULL;
short var_5 = (short)-19073;
unsigned short var_10 = (unsigned short)59089;
unsigned short var_11 = (unsigned short)32631;
signed char var_15 = (signed char)89;
unsigned long long int var_18 = 7621295776490727574ULL;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-12678;
short var_21 = (short)28354;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
