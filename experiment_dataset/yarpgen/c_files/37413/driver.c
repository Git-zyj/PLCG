#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-119;
unsigned long long int var_2 = 10693926347868081317ULL;
unsigned char var_3 = (unsigned char)138;
short var_6 = (short)8151;
unsigned long long int var_7 = 18093435908836289448ULL;
int var_8 = 738055405;
unsigned long long int var_9 = 9225285622517989554ULL;
int var_10 = 489216175;
unsigned long long int var_11 = 4328885669471880020ULL;
int zero = 0;
int var_14 = 803452666;
long long int var_15 = -5925552772391543019LL;
short var_16 = (short)29938;
unsigned long long int var_17 = 1362173044878827275ULL;
int var_18 = -258672871;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
