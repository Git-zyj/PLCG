#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 426240295U;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1222739753U;
long long int var_8 = 4812219748897249354LL;
unsigned long long int var_11 = 17813625915151315702ULL;
unsigned short var_13 = (unsigned short)45674;
unsigned long long int var_16 = 3259037315458133630ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)42689;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 15742659759346625666ULL;
unsigned long long int var_21 = 8632008508296511248ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
