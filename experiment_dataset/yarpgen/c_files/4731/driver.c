#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15651;
short var_2 = (short)-4672;
_Bool var_6 = (_Bool)0;
int var_10 = 523451723;
long long int var_13 = 8551358257050751701LL;
unsigned long long int var_14 = 17322073587255503365ULL;
int var_15 = -966064829;
long long int var_16 = -2773894720356745710LL;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = -7937077617720459268LL;
unsigned char var_21 = (unsigned char)109;
short var_22 = (short)23154;
int var_23 = 1981266058;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
