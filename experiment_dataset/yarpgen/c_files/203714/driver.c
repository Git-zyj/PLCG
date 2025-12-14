#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-9422;
long long int var_1 = 3738118306856336142LL;
int var_2 = -747143813;
int var_5 = 411308249;
long long int var_9 = -4869127213657823936LL;
int var_13 = 230123253;
short var_15 = (short)-30125;
int zero = 0;
short var_19 = (short)-8262;
unsigned char var_20 = (unsigned char)155;
int var_21 = 642672879;
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
