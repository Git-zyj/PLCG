#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-125;
long long int var_1 = 6145223580466224049LL;
unsigned int var_3 = 2860404259U;
_Bool var_4 = (_Bool)1;
signed char var_5 = (signed char)108;
_Bool var_7 = (_Bool)1;
int var_8 = -302963851;
long long int var_9 = 2385520602565074939LL;
unsigned int var_10 = 1207471440U;
unsigned short var_11 = (unsigned short)10580;
unsigned short var_14 = (unsigned short)3125;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_17 = 3226777196U;
long long int var_18 = 5432828625019948661LL;
unsigned char var_19 = (unsigned char)132;
void init() {
}

void checksum() {
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
