#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12087;
unsigned char var_2 = (unsigned char)146;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 2189193971438662573ULL;
unsigned int var_5 = 2790720423U;
int var_8 = -727136245;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_10 = 114993940;
long long int var_11 = -7265902810344785590LL;
unsigned short var_12 = (unsigned short)19320;
int var_13 = 1078455239;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
