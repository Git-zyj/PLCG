#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1601720465U;
unsigned int var_3 = 460338387U;
unsigned char var_4 = (unsigned char)223;
unsigned int var_5 = 4222421702U;
unsigned short var_9 = (unsigned short)21206;
unsigned long long int var_10 = 14742048700575721299ULL;
short var_11 = (short)9108;
unsigned long long int var_16 = 18258779154105665796ULL;
unsigned long long int var_17 = 4526200450474664654ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)26739;
long long int var_19 = 5005470594904082993LL;
long long int var_20 = 5940917215735400943LL;
signed char var_21 = (signed char)-33;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
