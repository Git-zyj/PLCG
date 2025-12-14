#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1583960031;
int var_3 = 434940572;
int var_4 = -754266810;
int var_6 = 256622442;
int var_7 = 2110382254;
int var_11 = 96469412;
int var_13 = 380196192;
int var_15 = 372861544;
int zero = 0;
int var_16 = -2115747807;
int var_17 = -1146099690;
int var_18 = 43207100;
int var_19 = -502016289;
int var_20 = 1979611540;
int var_21 = -105436181;
int var_22 = 401821897;
int var_23 = 245623466;
int var_24 = -492788455;
int var_25 = -859464793;
int var_26 = -186850502;
int var_27 = -233668818;
int arr_4 [25] ;
int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = 2121248649;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = -1204967011;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
