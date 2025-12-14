#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)91;
signed char var_1 = (signed char)-70;
_Bool var_3 = (_Bool)0;
int var_4 = 1957534796;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)64;
int var_7 = -1764337260;
unsigned long long int var_8 = 3437737880630575640ULL;
unsigned char var_9 = (unsigned char)164;
int zero = 0;
unsigned char var_10 = (unsigned char)225;
unsigned long long int var_11 = 10127895791068648087ULL;
int var_12 = -1217493759;
long long int var_13 = 3165258016399915367LL;
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
