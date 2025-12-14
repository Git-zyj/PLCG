#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-11401;
short var_2 = (short)-29204;
long long int var_4 = 5326779559296431606LL;
unsigned long long int var_5 = 15504144754150204074ULL;
_Bool var_6 = (_Bool)0;
long long int var_9 = 8911369955178956673LL;
_Bool var_10 = (_Bool)1;
unsigned char var_12 = (unsigned char)223;
signed char var_13 = (signed char)-86;
int zero = 0;
signed char var_16 = (signed char)67;
unsigned char var_17 = (unsigned char)184;
_Bool var_18 = (_Bool)0;
long long int var_19 = 4089793285337798801LL;
unsigned long long int var_20 = 5394570815440440891ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
