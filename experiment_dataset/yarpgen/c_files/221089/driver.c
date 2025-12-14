#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)28029;
signed char var_3 = (signed char)-55;
signed char var_6 = (signed char)-95;
signed char var_7 = (signed char)116;
signed char var_8 = (signed char)1;
_Bool var_10 = (_Bool)1;
signed char var_13 = (signed char)-121;
unsigned long long int var_15 = 14325756436500610390ULL;
int zero = 0;
long long int var_18 = 3745399039859493493LL;
long long int var_19 = 571893075581042840LL;
unsigned int var_20 = 1068621360U;
int var_21 = -1235793678;
void init() {
}

void checksum() {
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
