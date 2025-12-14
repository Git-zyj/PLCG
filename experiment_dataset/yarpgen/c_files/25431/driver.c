#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-28;
long long int var_2 = 6919030737466970481LL;
unsigned char var_5 = (unsigned char)220;
long long int var_6 = 8863030472847858423LL;
long long int var_8 = 4750489015149923803LL;
unsigned long long int var_12 = 4110656344591763529ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 4019064462U;
short var_16 = (short)-9367;
int zero = 0;
unsigned int var_17 = 1359900062U;
long long int var_18 = -1734519132875002982LL;
signed char var_19 = (signed char)72;
_Bool var_20 = (_Bool)1;
unsigned int var_21 = 2638518307U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
