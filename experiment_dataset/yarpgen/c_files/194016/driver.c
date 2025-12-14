#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-1894;
long long int var_3 = -6013757074870963931LL;
unsigned int var_4 = 3864691044U;
unsigned char var_5 = (unsigned char)174;
short var_8 = (short)14928;
int var_9 = 1606560095;
unsigned long long int var_11 = 4323401057426282923ULL;
unsigned char var_14 = (unsigned char)28;
short var_15 = (short)-20002;
_Bool var_17 = (_Bool)1;
int zero = 0;
long long int var_18 = 467477341533400610LL;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 17529325708468734747ULL;
unsigned int var_21 = 328585640U;
int var_22 = -1507150893;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
