#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-19;
long long int var_2 = 2624137134781476088LL;
short var_6 = (short)29829;
unsigned short var_8 = (unsigned short)18802;
long long int var_9 = -2113280276054226627LL;
short var_18 = (short)-24362;
int zero = 0;
long long int var_19 = -3394979146647103823LL;
signed char var_20 = (signed char)16;
unsigned int var_21 = 113327073U;
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
