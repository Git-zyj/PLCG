/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = ((8841937360547967906 ? 16858 : 16858));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 *= 57835;
                                var_18 ^= (arr_13 [i_0] [i_2] [i_2] [i_3] [i_4]);
                                var_19 = ((((arr_8 [i_1] [3] [16]) ? (arr_8 [i_0] [i_1] [i_2]) : var_14)));
                                var_20 = (max(var_20, (((((((arr_3 [i_1] [i_2] [i_2]) ? (arr_3 [i_1] [i_2] [i_4 - 1]) : (arr_3 [i_0] [i_2] [i_4])))) ? ((-(arr_9 [i_0] [i_0] [i_4 + 1]))) : (arr_12 [i_0] [i_2] [i_3] [19]))))));
                                var_21 = (max((arr_9 [i_3] [i_2] [6]), ((var_0 && (((~(arr_7 [i_2]))))))));
                            }
                        }
                    }
                }
                var_22 = (max(var_4, (arr_12 [i_0] [i_0] [i_0] [i_1])));
                var_23 = (min(var_23, var_2));
            }
        }
    }
    var_24 = ((228 ? 57833 : -1603673605));
    #pragma endscop
}
