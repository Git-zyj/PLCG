#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -5173574287165628009LL;
unsigned char var_3 = (unsigned char)202;
unsigned long long int var_4 = 11987629852035436864ULL;
unsigned long long int var_5 = 16104349287514585784ULL;
unsigned short var_7 = (unsigned short)57199;
unsigned short var_8 = (unsigned short)51908;
unsigned char var_9 = (unsigned char)230;
short var_10 = (short)-11910;
unsigned char var_11 = (unsigned char)134;
signed char var_12 = (signed char)109;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)49007;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)206;
unsigned long long int var_19 = 18071812878217306078ULL;
unsigned char var_20 = (unsigned char)161;
unsigned long long int var_21 = 8873888777545919208ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
