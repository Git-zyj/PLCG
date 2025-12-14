#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 48692990;
signed char var_1 = (signed char)86;
signed char var_3 = (signed char)45;
signed char var_4 = (signed char)-90;
long long int var_5 = -6039981856741435542LL;
unsigned long long int var_7 = 17921487404569639974ULL;
int var_8 = 799176214;
unsigned long long int var_9 = 4130327978516984620ULL;
unsigned long long int var_10 = 1636668407803068846ULL;
unsigned long long int var_11 = 7189113256720605519ULL;
unsigned long long int var_13 = 9010206190052778747ULL;
unsigned char var_14 = (unsigned char)70;
unsigned long long int var_15 = 486394399308858785ULL;
int zero = 0;
unsigned long long int var_16 = 10803688189658751029ULL;
signed char var_17 = (signed char)93;
unsigned char var_18 = (unsigned char)219;
long long int var_19 = -4969416493685733761LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
