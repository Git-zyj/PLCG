#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42244;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 7905072005620112169ULL;
long long int var_6 = -296936195430139878LL;
unsigned short var_8 = (unsigned short)56931;
unsigned long long int var_10 = 5234705600794169522ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)34572;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
