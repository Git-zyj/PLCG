#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-62;
int zero = 0;
unsigned int var_12 = 3955392004U;
long long int var_13 = -2963004204199125538LL;
unsigned long long int var_14 = 11844131972820633701ULL;
unsigned short var_15 = (unsigned short)21376;
long long int var_16 = -2563009940308622136LL;
int var_17 = 270192129;
_Bool var_18 = (_Bool)0;
long long int var_19 = 3066605961475576784LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
