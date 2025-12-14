#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)90;
long long int var_2 = 2597710142687454109LL;
unsigned long long int var_5 = 9560747355718918568ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_9 = (unsigned char)196;
unsigned long long int var_11 = 3494060878869023288ULL;
int zero = 0;
unsigned long long int var_19 = 5556166154335144541ULL;
unsigned int var_20 = 1142888261U;
unsigned char var_21 = (unsigned char)193;
unsigned int var_22 = 2927201637U;
long long int var_23 = 4460175684906065792LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
