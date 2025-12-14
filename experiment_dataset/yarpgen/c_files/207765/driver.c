#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-76;
unsigned long long int var_2 = 5828940950756352232ULL;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 14070023699939074310ULL;
unsigned short var_5 = (unsigned short)31680;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 3848407129U;
signed char var_10 = (signed char)-51;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_15 = -3133261318142363286LL;
int var_16 = -136894894;
int var_17 = -344447629;
unsigned short var_18 = (unsigned short)51164;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
