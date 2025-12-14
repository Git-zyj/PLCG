#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)33695;
long long int var_3 = -4064735889155309324LL;
long long int var_4 = -1047573987533691335LL;
unsigned long long int var_5 = 10799776767403138041ULL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
long long int var_8 = -7089001992421874229LL;
long long int var_9 = -4573137587858689646LL;
long long int var_10 = -4890347164658570069LL;
long long int var_11 = 4317306043559839843LL;
long long int var_12 = -3019618788739197938LL;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)6405;
int zero = 0;
unsigned long long int var_15 = 17214611239466344015ULL;
unsigned long long int var_16 = 16377583851876258120ULL;
long long int var_17 = -307107291605137722LL;
void init() {
}

void checksum() {
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
