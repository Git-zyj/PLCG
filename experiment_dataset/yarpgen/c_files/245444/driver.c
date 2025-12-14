#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8177996813089300745LL;
int var_1 = 1015783645;
unsigned char var_2 = (unsigned char)225;
int var_4 = 1306277436;
unsigned short var_5 = (unsigned short)46806;
short var_6 = (short)24170;
unsigned char var_7 = (unsigned char)186;
unsigned char var_8 = (unsigned char)192;
long long int var_9 = -2734866434096320098LL;
int zero = 0;
unsigned long long int var_10 = 4673724222247824238ULL;
unsigned short var_11 = (unsigned short)57813;
signed char var_12 = (signed char)-109;
unsigned short var_13 = (unsigned short)43980;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
