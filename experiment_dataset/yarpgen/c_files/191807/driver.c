#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15696487559607659042ULL;
long long int var_2 = 9043220860954964245LL;
long long int var_3 = -5259482374366830451LL;
unsigned long long int var_4 = 16298910363649036047ULL;
unsigned long long int var_6 = 6953838409819085950ULL;
unsigned char var_9 = (unsigned char)101;
unsigned long long int var_10 = 6094406503512574759ULL;
unsigned char var_11 = (unsigned char)198;
long long int var_15 = -5293378991312492361LL;
signed char var_18 = (signed char)-9;
int zero = 0;
long long int var_19 = -8783132979118272428LL;
long long int var_20 = -2384155839107867101LL;
long long int var_21 = 5887985289347057640LL;
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
