#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)22;
int var_2 = -2057549523;
unsigned char var_3 = (unsigned char)188;
unsigned long long int var_5 = 16260574244134991953ULL;
unsigned long long int var_6 = 5774452317899264804ULL;
long long int var_7 = -1089390832791634984LL;
_Bool var_8 = (_Bool)0;
_Bool var_9 = (_Bool)1;
signed char var_12 = (signed char)-108;
unsigned long long int var_13 = 7002976387586441302ULL;
unsigned short var_14 = (unsigned short)41257;
int zero = 0;
unsigned int var_17 = 3674650517U;
long long int var_18 = 6083281015925403154LL;
int var_19 = -688988208;
long long int var_20 = 9168106710863669514LL;
unsigned long long int var_21 = 17091504298296918280ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
