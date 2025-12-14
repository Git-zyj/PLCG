/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51772
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(((((var_6 ? var_13 : var_8)))), ((min(var_0, 61284)))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_17 += (var_2 ? (max(((max(55043, 3425331115))), (arr_2 [i_0] [i_0]))) : ((var_9 ? (((var_3 ? var_1 : (arr_0 [i_0])))) : (arr_2 [i_0 + 1] [i_0 + 1]))));
        var_18 = ((((!(((14407784571361420289 - (-32767 - 1)))))) ? ((((arr_0 [i_0 - 1]) == (arr_0 [i_0 + 1])))) : ((2585496836 ? (arr_1 [i_0 - 1] [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0])))));
        arr_4 [i_0] [11] = (min(((6802172354369357536 ? (arr_0 [i_0 - 1]) : 1728589481358226074)), ((((arr_0 [i_0 + 1]) << (((var_3 + 148) - 22)))))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_9 [i_1] [i_1] = ((((((arr_0 [i_1]) ? var_13 : (arr_0 [i_1])))) ? (((var_8 >> (((arr_6 [i_1]) + 1247654601))))) : (((arr_0 [i_1]) ? var_12 : var_14))));
        var_19 = ((((arr_1 [i_1] [i_1]) + 2147483647)) >> (19038 - 19015));
        arr_10 [i_1] [i_1] = var_7;
    }
    for (int i_2 = 2; i_2 < 14;i_2 += 1)
    {
        arr_15 [i_2] [i_2 + 1] = ((~(min(((-19046 ? (arr_14 [i_2]) : var_10)), ((-1307748979 ? var_10 : (arr_14 [i_2])))))));
        var_20 = (((arr_13 [i_2 - 1] [14]) << ((((13422257565686587873 ? 4038959502348131327 : -19052)) - 4038959502348131314))));
        arr_16 [i_2] = (max(((3425331115 << (4038959502348131333 - 4038959502348131325))), (((((arr_0 [i_2]) >> (((arr_1 [i_2 - 2] [i_2 - 2]) + 1788020167))))))));
        var_21 = (max(var_21, ((((var_0 * 13562) * (((arr_1 [2] [i_2 + 1]) / (arr_1 [i_2 + 1] [i_2 + 1]))))))));
    }
    var_22 = var_14;
    #pragma endscop
}
