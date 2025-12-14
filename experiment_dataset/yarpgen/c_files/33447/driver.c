#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1485241910;
unsigned short var_2 = (unsigned short)20573;
int var_4 = 1107557508;
short var_7 = (short)-21852;
long long int var_9 = 3445391905147040927LL;
unsigned short var_10 = (unsigned short)43864;
short var_12 = (short)-16605;
int zero = 0;
unsigned short var_13 = (unsigned short)3652;
int var_14 = -358232819;
int var_15 = 1541480732;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
