#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 712769728;
unsigned long long int var_2 = 9590486717312947752ULL;
signed char var_4 = (signed char)45;
long long int var_7 = -835421824973424381LL;
unsigned long long int var_9 = 9248735777124798038ULL;
unsigned long long int var_11 = 5354984294014677107ULL;
signed char var_13 = (signed char)-81;
long long int var_14 = -8715716418177965991LL;
signed char var_16 = (signed char)-44;
int zero = 0;
short var_17 = (short)13035;
unsigned long long int var_18 = 15327857226825002374ULL;
short var_19 = (short)-4054;
long long int var_20 = 9086745958745383644LL;
int var_21 = 71206146;
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
