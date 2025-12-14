#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
unsigned long long int var_2 = 6468117117373286418ULL;
long long int var_3 = 6056333047553635663LL;
unsigned long long int var_6 = 10435753734646777598ULL;
unsigned int var_7 = 2621807955U;
unsigned int var_12 = 1058134374U;
signed char var_13 = (signed char)47;
long long int var_14 = 8583754931247505067LL;
unsigned long long int var_15 = 2458002037790610883ULL;
int zero = 0;
long long int var_18 = 5117075052358847273LL;
int var_19 = 189031320;
signed char var_20 = (signed char)-23;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
