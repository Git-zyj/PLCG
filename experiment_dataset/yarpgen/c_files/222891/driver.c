#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)16;
long long int var_1 = 4772647927654083006LL;
unsigned short var_2 = (unsigned short)65528;
int var_3 = -317542939;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 8354417829163110005ULL;
unsigned short var_6 = (unsigned short)34381;
unsigned char var_7 = (unsigned char)207;
unsigned int var_8 = 4043291714U;
unsigned long long int var_9 = 2839733059974299587ULL;
unsigned long long int var_10 = 2706631584829574439ULL;
int zero = 0;
long long int var_11 = 2952865629930165674LL;
short var_12 = (short)1162;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
