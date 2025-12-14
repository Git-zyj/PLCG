#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1850286652U;
long long int var_1 = -3503078512512402566LL;
unsigned char var_2 = (unsigned char)137;
int var_3 = -1478177336;
unsigned int var_4 = 3712022439U;
long long int var_5 = -205175891013226708LL;
long long int var_6 = -3376150973973730586LL;
unsigned short var_7 = (unsigned short)2110;
signed char var_8 = (signed char)-25;
unsigned long long int var_9 = 6216533815432573931ULL;
long long int var_10 = 7364652050143195421LL;
unsigned char var_11 = (unsigned char)156;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)5;
long long int var_14 = 782818312540770767LL;
long long int var_15 = -8313881688927721315LL;
signed char var_16 = (signed char)15;
unsigned char var_17 = (unsigned char)68;
unsigned int var_18 = 3057241475U;
int var_19 = 648676203;
int zero = 0;
short var_20 = (short)-26770;
int var_21 = -280613589;
int var_22 = 2138393999;
int var_23 = 967536829;
int var_24 = 2064916682;
unsigned char var_25 = (unsigned char)189;
short var_26 = (short)24333;
unsigned short var_27 = (unsigned short)55692;
short var_28 = (short)-20172;
int var_29 = -263068395;
unsigned long long int var_30 = 1626791638868895272ULL;
unsigned int var_31 = 545141263U;
unsigned int var_32 = 310117083U;
unsigned int var_33 = 1829553022U;
long long int var_34 = 3078452439932698562LL;
unsigned long long int var_35 = 13348784426307058283ULL;
_Bool var_36 = (_Bool)0;
long long int var_37 = -5944836321845230480LL;
long long int var_38 = 548734152246867948LL;
_Bool var_39 = (_Bool)0;
long long int var_40 = -7177303783995361133LL;
_Bool var_41 = (_Bool)1;
short var_42 = (short)-4900;
signed char var_43 = (signed char)0;
long long int var_44 = 1095792833143985803LL;
unsigned long long int var_45 = 10686371044776037567ULL;
int var_46 = -1276887013;
int var_47 = -499758140;
long long int var_48 = 2823978327183962401LL;
unsigned char var_49 = (unsigned char)88;
int var_50 = 1577363196;
unsigned char var_51 = (unsigned char)74;
short var_52 = (short)26102;
unsigned int var_53 = 1078214973U;
int var_54 = -1425324879;
short var_55 = (short)117;
long long int var_56 = 1727354376369780201LL;
int var_57 = 1356318706;
int var_58 = -560266804;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
