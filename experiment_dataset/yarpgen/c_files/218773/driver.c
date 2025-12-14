#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)53026;
_Bool var_2 = (_Bool)0;
unsigned int var_10 = 3709027929U;
int zero = 0;
unsigned short var_19 = (unsigned short)18280;
unsigned int var_20 = 2968975643U;
int var_21 = -240178204;
signed char var_22 = (signed char)82;
void init() {
}

void checksum() {
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
