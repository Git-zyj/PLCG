#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_16 = (signed char)-6;
int zero = 0;
unsigned int var_19 = 486542893U;
signed char var_20 = (signed char)-118;
unsigned short var_21 = (unsigned short)63053;
int var_22 = -630778484;
long long int var_23 = -4622916341819044829LL;
unsigned long long int var_24 = 5344916118401186624ULL;
unsigned char var_25 = (unsigned char)196;
unsigned char var_26 = (unsigned char)70;
short var_27 = (short)26752;
unsigned char var_28 = (unsigned char)14;
_Bool var_29 = (_Bool)1;
signed char var_30 = (signed char)87;
_Bool var_31 = (_Bool)1;
long long int var_32 = -5957212788481318913LL;
long long int var_33 = -2216397736405562049LL;
int var_34 = -1498547099;
int var_35 = -912190990;
signed char var_36 = (signed char)-20;
_Bool var_37 = (_Bool)0;
long long int var_38 = 5847802332097162872LL;
unsigned int var_39 = 3063874708U;
unsigned char var_40 = (unsigned char)62;
unsigned int var_41 = 802067305U;
long long int var_42 = 5445630486886716803LL;
unsigned long long int var_43 = 13857387573166802281ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
