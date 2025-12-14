#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -9028664142723869217LL;
unsigned char var_2 = (unsigned char)136;
unsigned long long int var_3 = 4664502570012257897ULL;
unsigned char var_5 = (unsigned char)225;
_Bool var_8 = (_Bool)1;
unsigned char var_10 = (unsigned char)120;
int var_11 = 546206816;
signed char var_15 = (signed char)-96;
unsigned short var_16 = (unsigned short)23395;
signed char var_17 = (signed char)82;
unsigned int var_18 = 1796310080U;
int zero = 0;
int var_20 = -462059109;
unsigned char var_21 = (unsigned char)124;
long long int var_22 = 3113176766420878586LL;
void init() {
}

void checksum() {
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
