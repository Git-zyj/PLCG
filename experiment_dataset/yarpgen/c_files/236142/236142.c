/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -var_0;
    var_16 &= (((-2147483639 ? var_8 : -var_7)));
    var_17 = (min(var_17, ((min((min(((-723052193 ? var_9 : var_4)), ((min(var_9, var_8))))), var_6)))));
    var_18 = 1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_19 ^= (min((-4 & 4), var_11));
                arr_6 [i_0] [i_1] [16] = ((-(((arr_4 [i_1]) ? (arr_2 [i_0]) : (arr_5 [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_20 = ((-(min((arr_4 [i_0]), (arr_8 [i_3] [0] [i_1])))));
                            var_21 *= (min((arr_10 [i_0] [i_1] [i_2] [i_0]), ((((8 ? var_4 : (arr_12 [i_2] [i_1] [i_2] [i_1])))))));
                            var_22 &= ((!((((arr_3 [i_0] [6] [i_2]) ? (arr_3 [i_2] [i_1] [i_0]) : (arr_3 [i_0] [i_0] [i_0]))))));

                            for (int i_4 = 1; i_4 < 1;i_4 += 1)
                            {
                                var_23 = 32256;
                                var_24 -= (min((16140901064495857664 & 5), (arr_1 [i_2] [i_1])));
                                arr_15 [i_0] [i_0] [i_0] [i_1] [18] = (((!100) & ((var_13 ? (5 / -2147483639) : (arr_14 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4])))));
                            }
                        }
                    }
                }
                arr_16 [i_1] [i_1] = ((((((arr_2 [i_0]) | -1718619484))) ? 33279 : ((max((arr_5 [i_1]), 89)))));
            }
        }
    }
    #pragma endscop
}
