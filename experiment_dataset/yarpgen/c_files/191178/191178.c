/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (~11565);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_16 ^= (min((arr_2 [i_0]), ((min(var_3, var_7)))));
        arr_3 [i_0] [i_0] |= 53971;
    }

    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        arr_6 [i_1] = (arr_1 [i_1] [i_1]);
        arr_7 [i_1] [i_1] = ((min(((((arr_0 [i_1]) <= (arr_1 [i_1] [i_1])))), (((arr_5 [i_1] [i_1]) | 65247)))));
        arr_8 [i_1] = 11565;
        var_17 = max((((((min(var_14, (arr_4 [i_1] [i_1])))) && ((max((arr_2 [i_1]), var_6)))))), (max((((var_1 ? var_4 : -2352129067335325816))), var_11)));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_18 = (min(var_18, ((((((53981 ? (((arr_9 [i_2]) - (arr_10 [14] [14]))) : (arr_0 [i_2])))) ? 33545 : 31837)))));
        var_19 = (min(var_19, ((min(var_2, ((max((((~(arr_10 [i_2] [4])))), ((var_2 ? (arr_11 [i_2] [i_2]) : (arr_11 [i_2] [i_2])))))))))));
        var_20 = ((arr_1 [i_2] [i_2]) + var_8);

        /* vectorizable */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_15 [i_2] [i_2] [i_3] = var_4;
            arr_16 [i_2] = (~-2352129067335325816);
            arr_17 [i_2] [i_3] [i_2] = -0;
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            arr_20 [i_2] = (((arr_18 [i_2] [i_4] [i_2]) != (((arr_18 [i_2] [i_2] [i_2]) ^ (arr_18 [i_2] [i_4] [i_2])))));
            var_21 = (min(var_21, ((max((min((arr_12 [i_2]), -1800713229)), 53990)))));
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_22 -= ((((((arr_9 [i_5]) ? (~11546) : ((362474891 - (arr_21 [i_5] [i_5])))))) ? (arr_19 [i_2] [i_5] [i_5]) : 53971));
            var_23 = ((((var_8 ? ((11546 ? 0 : 448)) : var_9)) % (arr_14 [i_2])));
            arr_23 [i_5] [i_2] = (((16383 + 41713) ? (arr_14 [i_2]) : ((((var_2 ? (arr_9 [i_2]) : (arr_12 [i_2]))) + (arr_14 [i_2])))));
            var_24 = ((((((arr_21 [i_2] [i_5]) ? (arr_21 [i_2] [i_2]) : (arr_21 [i_2] [i_2])))) ? (min((arr_21 [i_2] [i_5]), (arr_21 [i_2] [i_5]))) : ((((-362474898 != (arr_21 [i_2] [i_5])))))));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            var_25 = var_14;
            var_26 = 0;
        }
    }
    #pragma endscop
}
