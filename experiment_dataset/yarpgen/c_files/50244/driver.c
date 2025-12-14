#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3166689032671864806LL;
_Bool var_2 = (_Bool)0;
long long int var_3 = -5512616464260936016LL;
unsigned char var_5 = (unsigned char)116;
_Bool var_6 = (_Bool)1;
long long int var_9 = -1265479044712757144LL;
signed char var_10 = (signed char)-35;
unsigned short var_11 = (unsigned short)46606;
signed char var_12 = (signed char)125;
unsigned short var_16 = (unsigned short)5465;
int var_17 = -2019586918;
unsigned long long int var_18 = 12526424175809476816ULL;
unsigned long long int var_19 = 17376260104432535961ULL;
int zero = 0;
unsigned int var_20 = 2721862042U;
signed char var_21 = (signed char)-88;
long long int var_22 = -2526787838357079746LL;
signed char var_23 = (signed char)-123;
long long int var_24 = 5061328207852329825LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
