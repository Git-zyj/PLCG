#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -933795620;
unsigned short var_1 = (unsigned short)38707;
long long int var_2 = 878964673032021551LL;
int var_3 = -1454997576;
unsigned int var_6 = 66950128U;
unsigned short var_7 = (unsigned short)35747;
long long int var_8 = -5551876472077211398LL;
signed char var_9 = (signed char)-68;
int zero = 0;
long long int var_11 = -7651453185062371621LL;
short var_12 = (short)-24039;
signed char var_13 = (signed char)9;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
