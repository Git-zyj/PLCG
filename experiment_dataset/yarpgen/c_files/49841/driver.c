#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)1236;
long long int var_3 = -1129229872578765671LL;
_Bool var_4 = (_Bool)1;
unsigned short var_5 = (unsigned short)31673;
unsigned short var_7 = (unsigned short)54180;
unsigned short var_8 = (unsigned short)44812;
unsigned int var_9 = 1226350324U;
long long int var_11 = -5023355283744188063LL;
int zero = 0;
signed char var_12 = (signed char)28;
unsigned char var_13 = (unsigned char)182;
void init() {
}

void checksum() {
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
