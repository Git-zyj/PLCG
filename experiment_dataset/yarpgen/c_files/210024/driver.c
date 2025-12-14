#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 3925436909373047786ULL;
unsigned int var_3 = 3814789496U;
_Bool var_5 = (_Bool)0;
unsigned short var_9 = (unsigned short)60501;
unsigned long long int var_10 = 11656710875554510037ULL;
unsigned short var_11 = (unsigned short)34567;
unsigned char var_12 = (unsigned char)57;
unsigned char var_15 = (unsigned char)88;
int zero = 0;
long long int var_16 = 1724683098094935873LL;
long long int var_17 = 3423586668604876777LL;
long long int var_18 = 8986835148898649795LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
