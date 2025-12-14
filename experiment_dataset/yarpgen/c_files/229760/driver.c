#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)62162;
unsigned short var_5 = (unsigned short)53978;
long long int var_6 = -6089000289489619905LL;
unsigned char var_11 = (unsigned char)167;
_Bool var_12 = (_Bool)1;
unsigned long long int var_15 = 4811237075304406768ULL;
int zero = 0;
int var_18 = -267866272;
unsigned long long int var_19 = 6399663240579981938ULL;
unsigned long long int var_20 = 13168157439555592183ULL;
unsigned char var_21 = (unsigned char)132;
unsigned short var_22 = (unsigned short)54837;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
