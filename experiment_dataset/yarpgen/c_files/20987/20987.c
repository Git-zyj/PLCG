/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_1, var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_20 += ((+((+(((arr_1 [i_1]) * var_0))))));
                arr_4 [i_0] [i_0] [i_0] = (arr_0 [6] [6]);
                arr_5 [i_0] [i_0] [i_0] = (max((~var_14), -85));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_21 = (max(var_21, (((-11075 ? (((arr_7 [i_0] [i_0] [i_1] [i_2]) ? 6187388411035591741 : var_2)) : (arr_3 [11] [2] [i_0]))))));
                    arr_9 [i_2] = (var_0 - 4649);
                    arr_10 [i_0] = 1;
                    arr_11 [i_1] [5] = (((arr_6 [i_2] [i_1 - 1] [i_1] [i_1 + 3]) ? (arr_6 [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1 - 1]) : (arr_6 [i_1 + 2] [i_1 + 2] [i_1] [i_1 + 1])));
                    arr_12 [i_2] [i_1] [i_0] = (140735340871680 == var_4);
                }
                var_22 = (max(((var_18 ? (arr_6 [i_1 + 3] [2] [i_1 + 3] [i_1 + 3]) : var_13)), 8596));
            }
        }
    }
    var_23 = (min((((max(4294967293, var_10)))), var_10));
    #pragma endscop
}
