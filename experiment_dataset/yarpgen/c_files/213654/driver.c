#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-96;
long long int var_2 = 3264229460493245848LL;
_Bool var_3 = (_Bool)0;
signed char var_4 = (signed char)-44;
int var_5 = -554210293;
signed char var_6 = (signed char)-51;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned short var_10 = (unsigned short)9916;
unsigned int var_11 = 3201043088U;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
