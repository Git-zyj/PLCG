#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16369222691636465222ULL;
_Bool var_1 = (_Bool)0;
int var_2 = 855416228;
long long int var_3 = 6242347502461179610LL;
_Bool var_7 = (_Bool)0;
unsigned long long int var_9 = 8761629332166527142ULL;
unsigned long long int var_11 = 10601517104136434034ULL;
unsigned long long int var_12 = 9212003901772217971ULL;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 14904144475061231832ULL;
unsigned char var_17 = (unsigned char)121;
int zero = 0;
int var_18 = -1030071224;
unsigned short var_19 = (unsigned short)65100;
unsigned short var_20 = (unsigned short)25995;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
