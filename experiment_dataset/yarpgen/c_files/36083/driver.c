#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 2373728361470664678LL;
int var_2 = 693122017;
signed char var_4 = (signed char)-122;
short var_5 = (short)18467;
unsigned long long int var_6 = 18427634402676909380ULL;
unsigned short var_7 = (unsigned short)38715;
short var_8 = (short)14632;
signed char var_9 = (signed char)-107;
signed char var_10 = (signed char)-14;
unsigned long long int var_12 = 8453433994713410706ULL;
int var_13 = 400421834;
signed char var_14 = (signed char)-120;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-50;
int zero = 0;
signed char var_20 = (signed char)71;
long long int var_21 = 3364662065948381649LL;
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
