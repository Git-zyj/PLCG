#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4135254037857800431LL;
int var_1 = 2124146725;
_Bool var_2 = (_Bool)1;
int var_4 = 1590559080;
_Bool var_6 = (_Bool)1;
int var_7 = 1575613424;
unsigned long long int var_8 = 1013669308421718061ULL;
unsigned int var_9 = 3671081967U;
_Bool var_11 = (_Bool)0;
int var_12 = -1080307092;
long long int var_13 = 7614209099096978947LL;
unsigned int var_14 = 1091763691U;
int zero = 0;
long long int var_18 = -8677734799249770495LL;
long long int var_19 = -1535375620915481441LL;
long long int var_20 = 9203477213302532159LL;
unsigned int var_21 = 4089185333U;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
