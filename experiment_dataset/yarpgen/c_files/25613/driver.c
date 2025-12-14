#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8535895270797588434ULL;
long long int var_1 = 5495151425615977023LL;
unsigned int var_2 = 526971643U;
long long int var_5 = -5507352506796026551LL;
unsigned int var_6 = 1066459833U;
long long int var_8 = 4191970601920783377LL;
signed char var_9 = (signed char)(-127 - 1);
int var_10 = 825765869;
int zero = 0;
int var_11 = 450061291;
short var_12 = (short)-28923;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3998953818U;
unsigned int var_15 = 2485483865U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
