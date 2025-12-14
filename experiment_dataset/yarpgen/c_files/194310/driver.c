#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6522504206992193668LL;
long long int var_1 = -4588742284514507845LL;
long long int var_2 = 3729866237869679574LL;
long long int var_3 = 7457912409855182094LL;
_Bool var_5 = (_Bool)0;
int var_6 = -586929051;
long long int var_7 = -5052906387067251637LL;
long long int var_8 = -6796189295862782293LL;
unsigned char var_9 = (unsigned char)14;
long long int var_10 = 713589116769905813LL;
long long int var_13 = 5748501379688119091LL;
int zero = 0;
int var_14 = 237802169;
long long int var_15 = -7339157110628605031LL;
long long int var_16 = -7023275002040995467LL;
int var_17 = 1255225175;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
