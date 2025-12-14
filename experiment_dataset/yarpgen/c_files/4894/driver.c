#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -947611489906237795LL;
short var_9 = (short)29556;
unsigned char var_11 = (unsigned char)157;
_Bool var_12 = (_Bool)1;
signed char var_14 = (signed char)-11;
_Bool var_17 = (_Bool)0;
long long int var_18 = 77328317877217880LL;
int zero = 0;
unsigned char var_19 = (unsigned char)186;
unsigned long long int var_20 = 6748915366764487478ULL;
unsigned short var_21 = (unsigned short)63770;
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
