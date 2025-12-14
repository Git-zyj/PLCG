/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (max(var_20, (((((((((arr_3 [i_1]) == var_3)) ? 0 : var_10))) || ((((arr_2 [i_0] [i_1]) - ((max((arr_3 [i_1]), 127)))))))))));
                arr_5 [i_0] [i_0] [i_0] = ((((max(-1201298771, var_0))) ? (arr_3 [i_0]) : (((((var_9 ? 104 : var_7))) ? (!-17512) : ((var_2 ? 421255881 : var_6))))));
                var_21 = (max(var_21, ((((arr_0 [i_0]) ? ((((min((arr_1 [i_1]), var_5))))) : ((-95 ? var_14 : (min((arr_4 [i_0] [i_1]), (arr_1 [i_1]))))))))));
            }
        }
    }

    for (int i_2 = 1; i_2 < 18;i_2 += 1)
    {
        var_22 = (((~(arr_6 [i_2 + 1]))));
        var_23 = 0;
        var_24 = (arr_6 [i_2 + 1]);
        var_25 = (max(var_25, ((min((arr_7 [i_2 + 1] [i_2]), (arr_6 [i_2]))))));
        var_26 = (min(var_26, ((((((((min((arr_7 [i_2] [i_2]), var_2))) ? (arr_7 [i_2] [i_2]) : ((var_19 ? (arr_7 [i_2 + 1] [i_2]) : (arr_6 [i_2])))))) ? ((var_13 ? (((arr_6 [i_2]) ? (arr_6 [i_2 + 1]) : var_9)) : 73)) : (((arr_6 [i_2 + 2]) ? ((-20 ? -1 : -16)) : var_13)))))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    arr_17 [i_3] [i_4] [i_5] = (!108);
                    arr_18 [i_4] [i_4] |= (((((((((arr_13 [i_3] [i_4] [i_4]) ? 51427 : 29001))) ? (!var_7) : (var_11 || var_16)))) ? ((min((min(1891611862, 11)), (var_9 && -19)))) : (arr_1 [i_3])));
                    var_27 = var_13;
                }
            }
        }

        /* vectorizable */
        for (int i_6 = 4; i_6 < 11;i_6 += 1)
        {
            var_28 = 46500;
            var_29 = (max(var_29, (((~(arr_13 [i_3] [i_3] [i_3]))))));
        }
        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            var_30 = (min(var_30, ((((arr_23 [i_7 - 2] [i_7] [i_7 - 1]) ? ((min(var_11, (arr_11 [i_7] [i_7 - 1])))) : (((arr_23 [i_7 - 2] [i_7] [i_7 - 1]) ? (arr_19 [i_7 - 2] [i_7 - 2] [i_7 - 1]) : (arr_23 [i_7 - 2] [i_7] [i_7 - 1]))))))));
            arr_26 [i_3] [i_7 - 1] = (-6826 != 3984207293);
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_31 = ((((max(((var_17 ? (arr_3 [i_3]) : (arr_13 [i_3] [i_8] [i_8]))), 12))) * (min((max(20, 9223372036854775807)), (var_1 || 1)))));
            var_32 = (((1 & 0) ? ((((min((arr_1 [i_3]), (arr_13 [i_8] [i_8] [i_3])))) ? var_15 : (~-25))) : ((-190 ? ((min((arr_12 [i_8]), (arr_0 [i_8])))) : 36906))));
        }
    }
    #pragma endscop
}
