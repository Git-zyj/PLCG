#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7256924741933356509LL;
long long int var_1 = -6848735044154302930LL;
int var_2 = -2003718735;
_Bool var_3 = (_Bool)0;
int var_4 = 1202396301;
int var_5 = -72565180;
unsigned char var_6 = (unsigned char)235;
unsigned char var_7 = (unsigned char)10;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-29982;
int zero = 0;
unsigned long long int var_11 = 1565678015081438605ULL;
unsigned int var_12 = 2535174264U;
long long int var_13 = 2535816898531961549LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
