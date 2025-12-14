#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-112;
short var_1 = (short)14964;
unsigned int var_2 = 3896666884U;
unsigned int var_5 = 1397753356U;
int var_7 = -1485651811;
unsigned long long int var_9 = 4263990667603450986ULL;
long long int var_10 = 8551081225666851721LL;
unsigned int var_13 = 3929699813U;
unsigned int var_14 = 3641093051U;
signed char var_15 = (signed char)54;
unsigned int var_16 = 3882046220U;
int zero = 0;
int var_17 = 1831839592;
signed char var_18 = (signed char)112;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
