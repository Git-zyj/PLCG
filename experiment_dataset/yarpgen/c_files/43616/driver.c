#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2964556341926351784LL;
short var_1 = (short)-27476;
long long int var_7 = -8138369121881491187LL;
long long int var_9 = 6593305882987670124LL;
long long int var_11 = 1532348923938702380LL;
short var_12 = (short)32374;
int var_13 = 726816911;
signed char var_14 = (signed char)123;
int zero = 0;
unsigned char var_17 = (unsigned char)147;
unsigned long long int var_18 = 14655109513799357474ULL;
unsigned long long int var_19 = 4649545983976229841ULL;
int var_20 = 1740802197;
short arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-4674 : (short)-17515;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
