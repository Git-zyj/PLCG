#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14562632662620046907ULL;
unsigned long long int var_1 = 10017204213281485724ULL;
unsigned long long int var_2 = 15896760214027545748ULL;
unsigned long long int var_3 = 496173736178846969ULL;
unsigned long long int var_4 = 1399546786116639499ULL;
unsigned int var_5 = 13746483U;
unsigned long long int var_6 = 541752823635614046ULL;
unsigned int var_7 = 348787434U;
unsigned int var_8 = 2692966500U;
unsigned int var_9 = 3660682478U;
unsigned long long int var_10 = 10281190451524791536ULL;
unsigned int var_11 = 3783457523U;
unsigned long long int var_12 = 12681121201104290580ULL;
int zero = 0;
unsigned long long int var_13 = 15279791471649996550ULL;
unsigned long long int var_14 = 13616076414361249980ULL;
unsigned int var_15 = 1705058262U;
unsigned int var_16 = 989841553U;
unsigned long long int var_17 = 11545287043436276271ULL;
unsigned long long int var_18 = 7922453850802312889ULL;
unsigned int var_19 = 4237206873U;
unsigned int var_20 = 4070431025U;
unsigned int var_21 = 2469445940U;
unsigned long long int var_22 = 12239981857320905268ULL;
unsigned long long int var_23 = 6199812879473030390ULL;
unsigned int var_24 = 1729483775U;
unsigned long long int var_25 = 9276843873256506892ULL;
unsigned int var_26 = 1745845583U;
unsigned long long int var_27 = 10903389808482811097ULL;
unsigned long long int var_28 = 5046927433356053648ULL;
unsigned long long int var_29 = 8823960340759923590ULL;
unsigned int var_30 = 1926515001U;
unsigned long long int var_31 = 10965983225219540381ULL;
unsigned int var_32 = 1681612927U;
unsigned long long int var_33 = 14226393269770805569ULL;
unsigned int var_34 = 1760486153U;
unsigned int var_35 = 1197466566U;
unsigned int var_36 = 2111092167U;
unsigned long long int var_37 = 17421034255032151493ULL;
unsigned int var_38 = 3377651735U;
unsigned long long int var_39 = 12999210570902132505ULL;
unsigned int var_40 = 568460511U;
unsigned long long int var_41 = 8200486825146972511ULL;
unsigned int var_42 = 1682612221U;
unsigned int var_43 = 4232485800U;
unsigned int var_44 = 216812649U;
unsigned long long int var_45 = 17160480901856669117ULL;
unsigned long long int var_46 = 10521698418487088940ULL;
unsigned int var_47 = 1872324073U;
unsigned int var_48 = 171894112U;
unsigned int var_49 = 344372356U;
unsigned long long int var_50 = 9328183154161880290ULL;
unsigned long long int var_51 = 4660968028374531181ULL;
unsigned int var_52 = 1735150340U;
unsigned long long int var_53 = 15950889497572789104ULL;
unsigned int var_54 = 1291721926U;
unsigned long long int var_55 = 10677168362078050424ULL;
unsigned long long int var_56 = 11466956966179902761ULL;
unsigned int var_57 = 2297261629U;
unsigned long long int var_58 = 3203281994558947342ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
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
