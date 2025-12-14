#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18267;
unsigned char var_1 = (unsigned char)71;
unsigned char var_2 = (unsigned char)109;
long long int var_4 = -1251682244888413939LL;
signed char var_8 = (signed char)29;
unsigned char var_9 = (unsigned char)164;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)39;
long long int var_12 = 6702673891966595569LL;
short var_13 = (short)-21506;
unsigned char var_15 = (unsigned char)109;
long long int var_16 = 1054305686581846366LL;
signed char var_17 = (signed char)-113;
int zero = 0;
unsigned int var_19 = 3342848480U;
signed char var_20 = (signed char)-95;
long long int var_21 = -358798452597679065LL;
int var_22 = -547534064;
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
