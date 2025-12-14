#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3569126113U;
unsigned short var_4 = (unsigned short)44269;
unsigned short var_6 = (unsigned short)35980;
short var_7 = (short)25945;
unsigned char var_8 = (unsigned char)32;
_Bool var_9 = (_Bool)0;
int var_11 = 2056509279;
unsigned char var_12 = (unsigned char)120;
unsigned char var_13 = (unsigned char)89;
unsigned char var_15 = (unsigned char)111;
unsigned long long int var_17 = 12460319885362549409ULL;
long long int var_18 = -1370479769105700575LL;
int zero = 0;
unsigned long long int var_20 = 8687657448349520340ULL;
_Bool var_21 = (_Bool)1;
long long int var_22 = -7592313558241857837LL;
void init() {
}

void checksum() {
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
