#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9732684325638258094ULL;
int var_2 = -1286606487;
unsigned long long int var_3 = 12995245231003493189ULL;
unsigned short var_4 = (unsigned short)25819;
unsigned short var_5 = (unsigned short)10178;
unsigned char var_6 = (unsigned char)7;
signed char var_13 = (signed char)38;
unsigned char var_14 = (unsigned char)156;
unsigned long long int var_15 = 2854402149723606762ULL;
unsigned char var_18 = (unsigned char)80;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 2020188344844958947ULL;
unsigned long long int var_21 = 17009729793777277125ULL;
unsigned short var_22 = (unsigned short)53956;
long long int var_23 = -8548115348310253819LL;
unsigned char var_24 = (unsigned char)170;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
