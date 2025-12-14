#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8845012013421688095LL;
long long int var_7 = -6433486589732206353LL;
short var_9 = (short)-695;
unsigned long long int var_11 = 3947222435158518570ULL;
_Bool var_12 = (_Bool)0;
long long int var_14 = 5969187458500546182LL;
int zero = 0;
unsigned long long int var_18 = 1096519305676906915ULL;
signed char var_19 = (signed char)-67;
int var_20 = 218514545;
int var_21 = 699687526;
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
