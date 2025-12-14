#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5657137277702574596LL;
long long int var_2 = 4406767467843526586LL;
_Bool var_3 = (_Bool)0;
unsigned short var_8 = (unsigned short)11431;
unsigned int var_9 = 315406859U;
long long int var_11 = 692058257347250596LL;
unsigned char var_13 = (unsigned char)159;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)143;
signed char var_18 = (signed char)-49;
signed char var_19 = (signed char)-10;
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
