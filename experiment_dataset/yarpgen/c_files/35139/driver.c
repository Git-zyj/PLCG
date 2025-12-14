#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4767012761790932971LL;
signed char var_1 = (signed char)-4;
long long int var_2 = 4284753666969503102LL;
unsigned int var_4 = 435290759U;
int var_6 = -174553004;
int var_7 = 269977065;
unsigned int var_8 = 2081293067U;
_Bool var_11 = (_Bool)0;
int var_13 = -1394257274;
int var_15 = -1021463886;
short var_17 = (short)32439;
signed char var_19 = (signed char)-58;
int zero = 0;
int var_20 = 1549697906;
unsigned int var_21 = 978636514U;
unsigned char var_22 = (unsigned char)13;
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
