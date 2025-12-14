#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 2962853629603132401ULL;
unsigned short var_7 = (unsigned short)30867;
unsigned int var_8 = 1544871605U;
unsigned short var_9 = (unsigned short)960;
signed char var_10 = (signed char)-21;
int zero = 0;
long long int var_19 = -4951614480091586921LL;
unsigned long long int var_20 = 8966730437308034997ULL;
unsigned long long int var_21 = 715745212966761981ULL;
signed char var_22 = (signed char)77;
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
