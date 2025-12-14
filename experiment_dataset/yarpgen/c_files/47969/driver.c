#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3162072592U;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)1;
long long int var_6 = 1672106735952606458LL;
long long int var_8 = 1203296259614751285LL;
long long int var_9 = -2989841427578379623LL;
int zero = 0;
unsigned int var_10 = 2946445081U;
long long int var_11 = -3925526192232986810LL;
long long int var_12 = -378116484028979359LL;
unsigned short var_13 = (unsigned short)5367;
unsigned short var_14 = (unsigned short)60768;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
