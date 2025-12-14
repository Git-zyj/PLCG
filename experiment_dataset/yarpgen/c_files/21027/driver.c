#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_3 = 6938020333015683075ULL;
unsigned long long int var_4 = 2813146223779357488ULL;
unsigned char var_5 = (unsigned char)57;
unsigned long long int var_8 = 7118923358895032606ULL;
long long int var_10 = 1243571168423103805LL;
_Bool var_11 = (_Bool)0;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned long long int var_17 = 8596397880814901111ULL;
signed char var_18 = (signed char)-104;
_Bool var_19 = (_Bool)1;
long long int var_20 = 2885614938696282876LL;
unsigned long long int var_21 = 304261063728349274ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
