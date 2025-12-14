#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = -7113071208555915357LL;
unsigned long long int var_4 = 17729071100346428413ULL;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-13;
long long int var_8 = -526820035679031917LL;
int zero = 0;
int var_11 = -1970613342;
unsigned long long int var_12 = 7194453433763393669ULL;
unsigned long long int var_13 = 3077023097834272701ULL;
long long int var_14 = 3099701431717629254LL;
void init() {
}

void checksum() {
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
