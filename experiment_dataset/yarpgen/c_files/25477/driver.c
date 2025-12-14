#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)8;
long long int var_8 = 4202915907432038723LL;
int var_9 = 1812405964;
signed char var_10 = (signed char)-102;
unsigned long long int var_15 = 3382258349584560650ULL;
int zero = 0;
long long int var_17 = -8378525173763598290LL;
int var_18 = 1049885408;
unsigned long long int var_19 = 4232328079708944870ULL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)10;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
