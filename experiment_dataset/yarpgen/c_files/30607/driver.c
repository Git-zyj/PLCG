#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9011239413093309121ULL;
long long int var_3 = 7840726665452673957LL;
unsigned int var_4 = 2417027600U;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)25653;
short var_7 = (short)5182;
signed char var_9 = (signed char)-57;
unsigned int var_10 = 69996431U;
signed char var_11 = (signed char)-126;
_Bool var_12 = (_Bool)0;
int var_13 = -1563845651;
int var_14 = -446944858;
signed char var_15 = (signed char)-108;
long long int var_16 = -8155465282802729517LL;
int zero = 0;
unsigned long long int var_17 = 10666472315937632080ULL;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 2168171104U;
unsigned int var_20 = 1963568382U;
long long int var_21 = 8041039697439888883LL;
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
