/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                var_19 += (((((~(((!(arr_3 [i_1] [i_0]))))))) ? (var_17 & var_2) : (max(((14 % (arr_2 [i_0] [i_1] [i_1]))), (((arr_3 [i_0] [3]) ? (arr_0 [i_0] [i_0]) : var_14))))));
                var_20 = ((((max(var_8, (arr_3 [i_1 - 3] [7])))) ? ((min((arr_3 [i_0] [i_1 + 1]), (arr_3 [i_0] [i_0])))) : (((arr_3 [i_1] [i_0]) ? 5 : (arr_3 [i_1] [i_1 - 3])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                var_21 = arr_8 [i_2] [i_3] [i_3];
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        {
                            var_22 *= (max((~73), (217 < 217)));
                            var_23 -= ((((max(29, 0))) + (((((arr_10 [i_2 + 2] [i_3] [i_5] [i_5]) || (arr_7 [i_5]))) ? ((((arr_12 [i_3] [i_3] [i_2]) != 217))) : (arr_10 [i_5 - 1] [i_5 - 1] [i_4] [8])))));
                            var_24 = (!39);
                            var_25 *= arr_5 [i_2 + 1] [i_3];
                            var_26 = (min(((((min((arr_5 [i_2] [i_2]), (arr_5 [i_2 - 1] [i_2 + 1])))) & -2)), ((((max((arr_6 [i_2] [i_3]), var_16))) << (((((arr_10 [i_2] [i_3] [13] [i_5]) ? 156 : 242)) - 145))))));
                        }
                    }
                }
                var_27 ^= (max(((min(var_1, (arr_9 [i_2] [i_2] [i_3])))), ((+((max((arr_7 [i_2]), var_6)))))));
            }
        }
    }

    for (int i_6 = 0; i_6 < 16;i_6 += 1)
    {
        var_28 = ((48 / ((min(var_18, (arr_7 [i_6]))))));
        var_29 = ((((max((max((arr_5 [i_6] [i_6]), var_15)), 35))) ? (((arr_4 [i_6]) ^ var_7)) : (((!(((var_17 % (arr_9 [i_6] [4] [i_6])))))))));
    }
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        var_30 = (((((~var_9) | (var_15 ^ 0))) & (~var_7)));
        var_31 += (max(((min(8, 24))), ((((((arr_20 [i_7] [i_7]) ^ (arr_20 [i_7 + 1] [i_7])))) ? ((((arr_18 [i_7]) || 64))) : 42))));
    }
    var_32 &= min(var_0, (((var_1 <= (~1)))));
    var_33 = -var_7;
    #pragma endscop
}
