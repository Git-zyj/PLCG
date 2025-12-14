#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -4034095480569393840LL;
long long int var_2 = 2646496798137051722LL;
short var_4 = (short)28029;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int zero = 0;
int var_10 = -252307625;
unsigned long long int var_11 = 7431288317685868302ULL;
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
