#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)27741;
unsigned short var_4 = (unsigned short)22614;
_Bool var_11 = (_Bool)1;
short var_13 = (short)-11043;
_Bool var_15 = (_Bool)1;
unsigned short var_17 = (unsigned short)37322;
unsigned long long int var_18 = 4811151118394752229ULL;
int zero = 0;
short var_19 = (short)-2458;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)13035;
unsigned long long int var_22 = 13811547016880076498ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
