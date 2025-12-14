#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -240245362;
unsigned long long int var_3 = 4561496383562744013ULL;
unsigned int var_4 = 2949020119U;
int var_6 = -1418409263;
unsigned long long int var_16 = 8322693803229577829ULL;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 8043019151910355370LL;
_Bool var_22 = (_Bool)1;
long long int var_23 = -1010072557307979491LL;
unsigned short var_24 = (unsigned short)7306;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
