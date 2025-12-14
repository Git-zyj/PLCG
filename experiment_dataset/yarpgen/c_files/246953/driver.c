#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12401;
unsigned char var_3 = (unsigned char)169;
long long int var_5 = -9115791573070271956LL;
signed char var_8 = (signed char)-86;
signed char var_9 = (signed char)-108;
short var_10 = (short)-17336;
unsigned long long int var_11 = 15583232041458089345ULL;
long long int var_13 = -6484918077371339241LL;
short var_14 = (short)-23952;
long long int var_15 = 2421225037165320632LL;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 10802929844466662973ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 4005685336145879430ULL;
short var_20 = (short)-4903;
unsigned int var_21 = 2532385748U;
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
