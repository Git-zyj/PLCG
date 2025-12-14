#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 875452407476036093LL;
unsigned short var_7 = (unsigned short)44150;
int var_8 = -406106639;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 7896469154211248631ULL;
int var_13 = -1680952566;
unsigned short var_15 = (unsigned short)40147;
unsigned long long int var_16 = 15963003703124908607ULL;
long long int var_17 = 2379875619600341445LL;
int zero = 0;
long long int var_18 = -1622173728866599172LL;
signed char var_19 = (signed char)70;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 11908379584613243340ULL;
void init() {
}

void checksum() {
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
