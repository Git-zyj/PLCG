#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)49779;
unsigned char var_4 = (unsigned char)84;
long long int var_5 = 3556044584434879411LL;
_Bool var_6 = (_Bool)1;
long long int var_7 = 7861195743146824735LL;
long long int var_9 = 6624552755235753687LL;
_Bool var_10 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int var_13 = -1580952844;
int zero = 0;
signed char var_14 = (signed char)-44;
unsigned char var_15 = (unsigned char)52;
long long int var_16 = 8280685714707137702LL;
void init() {
}

void checksum() {
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
