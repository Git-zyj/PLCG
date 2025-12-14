#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52893;
_Bool var_2 = (_Bool)1;
_Bool var_6 = (_Bool)1;
long long int var_8 = 6849603213646708117LL;
unsigned short var_11 = (unsigned short)1406;
int zero = 0;
short var_12 = (short)-27829;
long long int var_13 = 7615048817025860412LL;
signed char var_14 = (signed char)-17;
unsigned short var_15 = (unsigned short)3475;
long long int var_16 = 6621025173312022264LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
