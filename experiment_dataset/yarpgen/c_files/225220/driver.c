#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9080992184356865739ULL;
_Bool var_1 = (_Bool)0;
signed char var_4 = (signed char)-55;
unsigned short var_7 = (unsigned short)13587;
int var_9 = 804077340;
unsigned long long int var_11 = 70932182606159163ULL;
long long int var_15 = -1472579865272603526LL;
signed char var_16 = (signed char)-124;
unsigned char var_18 = (unsigned char)136;
long long int var_19 = 2703726193753385119LL;
int zero = 0;
_Bool var_20 = (_Bool)1;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
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
