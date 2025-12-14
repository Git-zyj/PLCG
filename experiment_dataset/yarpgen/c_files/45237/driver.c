#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 15112492604874685215ULL;
int var_6 = 530426096;
int var_8 = 2067717801;
short var_10 = (short)9280;
long long int var_11 = -3712970884121629169LL;
long long int var_12 = -3358727327683549434LL;
unsigned int var_13 = 3180448194U;
int zero = 0;
long long int var_16 = -5108781135802391300LL;
long long int var_17 = 5505222732540026217LL;
_Bool var_18 = (_Bool)0;
int var_19 = 595451406;
unsigned short var_20 = (unsigned short)19044;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
