/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((!(79035390461733510 ^ var_8)))) + 1));
    var_11 |= (-var_0 ? -var_4 : ((var_6 ? -1454188646981034490 : ((-79035390461733491 ? 16760125066280167510 : 13414169628724121258)))));

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] = 0;
        var_12 *= var_7;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_13 = (min(var_13, var_8));
        var_14 = var_2;
        var_15 = (max((arr_0 [13]), ((-5750298305334385796 ? (arr_3 [1] [i_1]) : -79035390461733491))));
        var_16 |= 7280313845069093949;
        var_17 = (max(var_17, -79035390461733492));
    }
    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_18 = ((~(arr_7 [i_2 + 2])));
        arr_8 [i_2] = var_4;
        var_19 = (min(79035390461733491, (arr_6 [i_2 + 1])));
        arr_9 [i_2] |= ((-((min((arr_6 [i_2 + 4]), var_9)))));
        var_20 = ((~(--124)));
    }
    var_21 -= var_9;
    var_22 |= var_6;
    #pragma endscop
}
