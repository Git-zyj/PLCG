/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_12 = (min(var_12, 152));
        arr_2 [i_0] = ((32294 > (!var_5)));
    }
    for (int i_1 = 2; i_1 < 14;i_1 += 1)
    {
        var_13 ^= ((((max((arr_3 [i_1 + 4]), ((663721497 ? 32288 : (arr_4 [1] [i_1 + 2])))))) ? (min(32757, (max((arr_5 [i_1]), var_10)))) : (arr_6 [i_1 + 4])));
        arr_7 [0] = ((((((var_3 ^ 65528) & (arr_3 [i_1 + 2])))) ? 32761 : (!561007787)));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_10 [i_2] = ((((var_9 - ((32749 ? 561007787 : 561007793)))) <= (((max(var_6, (min(-32767, var_3))))))));
        var_14 = (max(var_14, ((max(561007796, 9223372036854775807)))));
        var_15 = (min(var_15, (((((119 || ((max(var_2, var_6))))) ? 1366494306 : ((152 ? (arr_6 [i_2]) : 1366494319)))))));

        /* vectorizable */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_16 += (arr_11 [i_2] [i_2] [i_3]);
            arr_13 [i_3] = (((arr_6 [i_3]) - 4294967287));
        }
        arr_14 [i_2] = 2133239512;
    }
    var_17 = -32762;
    var_18 = (min(var_18, (((!(((-32748 ? var_10 : var_0))))))));
    #pragma endscop
}
