#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6894174413618442486LL;
unsigned char var_3 = (unsigned char)115;
_Bool var_4 = (_Bool)1;
signed char var_10 = (signed char)-113;
long long int var_11 = -4286529784208043137LL;
unsigned char var_15 = (unsigned char)76;
unsigned char var_18 = (unsigned char)196;
int zero = 0;
short var_19 = (short)-30922;
long long int var_20 = 3944881799522178921LL;
long long int var_21 = 917940295929518527LL;
void init() {
}

void checksum() {
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
