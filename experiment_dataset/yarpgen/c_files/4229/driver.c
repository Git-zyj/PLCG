#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3971840044375358094ULL;
unsigned short var_1 = (unsigned short)61497;
unsigned char var_3 = (unsigned char)13;
unsigned long long int var_5 = 11911542936165694773ULL;
unsigned long long int var_6 = 15541658591981183055ULL;
_Bool var_8 = (_Bool)1;
unsigned short var_11 = (unsigned short)38859;
unsigned char var_13 = (unsigned char)25;
unsigned char var_15 = (unsigned char)111;
unsigned short var_17 = (unsigned short)63638;
int zero = 0;
signed char var_18 = (signed char)-39;
long long int var_19 = -759881223078067367LL;
void init() {
}

void checksum() {
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
