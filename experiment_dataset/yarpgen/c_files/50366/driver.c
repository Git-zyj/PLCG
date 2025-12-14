#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-38;
short var_1 = (short)24511;
unsigned short var_2 = (unsigned short)33449;
unsigned char var_3 = (unsigned char)255;
unsigned int var_4 = 3600956484U;
signed char var_5 = (signed char)-46;
signed char var_6 = (signed char)-26;
unsigned long long int var_8 = 16591179048101783227ULL;
_Bool var_9 = (_Bool)1;
long long int var_10 = -5108492933619679047LL;
int var_13 = 411373591;
unsigned short var_14 = (unsigned short)20752;
int var_16 = -444328779;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-65;
unsigned short var_20 = (unsigned short)52653;
_Bool var_21 = (_Bool)1;
signed char var_22 = (signed char)-23;
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
