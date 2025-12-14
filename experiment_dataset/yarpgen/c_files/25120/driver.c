#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9147493664391393267ULL;
unsigned long long int var_1 = 16417970735161659522ULL;
unsigned long long int var_2 = 16226863743098677677ULL;
unsigned long long int var_3 = 3389787858193557115ULL;
unsigned long long int var_5 = 14960554277650080944ULL;
unsigned long long int var_6 = 3642847823550877362ULL;
unsigned long long int var_7 = 13033608919835579938ULL;
unsigned char var_8 = (unsigned char)215;
unsigned char var_9 = (unsigned char)112;
unsigned long long int var_10 = 14953827812428770155ULL;
unsigned char var_12 = (unsigned char)50;
int zero = 0;
unsigned long long int var_15 = 737215251162315371ULL;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)51;
long long int var_18 = -8007152851050490915LL;
unsigned short var_19 = (unsigned short)18151;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
