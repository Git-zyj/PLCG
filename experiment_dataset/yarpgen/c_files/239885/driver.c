#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2593978876034827940LL;
int var_3 = -1996040637;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)0;
signed char var_12 = (signed char)-30;
unsigned short var_17 = (unsigned short)43477;
long long int var_18 = 3244503012002592264LL;
int zero = 0;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)10679;
int var_22 = 132568898;
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
