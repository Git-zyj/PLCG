#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 751109512U;
unsigned long long int var_2 = 17061041835359772054ULL;
long long int var_5 = 5558479468357768951LL;
long long int var_8 = -4322866552581107162LL;
unsigned char var_10 = (unsigned char)204;
short var_11 = (short)-1265;
long long int var_18 = 3891936261790378721LL;
int zero = 0;
unsigned int var_19 = 2042833577U;
unsigned short var_20 = (unsigned short)20902;
_Bool var_21 = (_Bool)1;
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
