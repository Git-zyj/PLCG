#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)25717;
signed char var_5 = (signed char)-76;
unsigned long long int var_6 = 6201670703215920059ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_11 = (unsigned short)47708;
long long int var_16 = 311334726369923245LL;
signed char var_19 = (signed char)105;
int zero = 0;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)32168;
unsigned char var_22 = (unsigned char)166;
unsigned int var_23 = 771794853U;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
