#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)227;
short var_2 = (short)-26267;
unsigned char var_3 = (unsigned char)202;
long long int var_5 = -1122698464440703276LL;
short var_7 = (short)-29404;
short var_8 = (short)-9723;
_Bool var_11 = (_Bool)0;
unsigned int var_13 = 2870693118U;
unsigned int var_14 = 2217623467U;
unsigned long long int var_15 = 8589854530498027338ULL;
int zero = 0;
long long int var_19 = -8090808413417309744LL;
signed char var_20 = (signed char)-39;
long long int var_21 = 3159338040765772528LL;
long long int var_22 = -6033370174906697573LL;
unsigned int var_23 = 3157345794U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
