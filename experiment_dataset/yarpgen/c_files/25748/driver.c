#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1305044081;
unsigned char var_2 = (unsigned char)43;
long long int var_3 = 4772350151732266347LL;
signed char var_5 = (signed char)-92;
long long int var_8 = 3744611163787849511LL;
long long int var_11 = -3130625494395762346LL;
int var_13 = -1679514215;
unsigned long long int var_15 = 8844237161526977106ULL;
unsigned long long int var_18 = 13046536817135415501ULL;
short var_19 = (short)-13478;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-24470;
unsigned short var_22 = (unsigned short)26640;
long long int var_23 = 302698090036720751LL;
void init() {
}

void checksum() {
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
