#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)39614;
unsigned long long int var_4 = 13754439080526306219ULL;
unsigned short var_5 = (unsigned short)43292;
unsigned long long int var_7 = 12831446949740414359ULL;
int var_15 = -1141850067;
unsigned short var_16 = (unsigned short)16742;
int zero = 0;
unsigned short var_19 = (unsigned short)9145;
unsigned long long int var_20 = 17815994976438086552ULL;
unsigned short var_21 = (unsigned short)25496;
void init() {
}

void checksum() {
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
