/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((~2878470346149069533) ? (((!var_6) ? (!var_14) : (min(var_16, -65)))) : (((-var_12 - (~var_9))))));
    var_20 = ((!((((((-1195936610 ? var_11 : var_8))) ? var_7 : var_3)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_21 = (max(var_21, (((-0 ? var_18 : 343880832)))));
        arr_4 [i_0] [i_0] |= ((1740043816 ? 1624710922 : (arr_2 [i_0 - 1])));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_10 [8] [8] [i_1] = ((var_1 ? (arr_9 [i_1] [i_1] [i_1]) : -10021));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        arr_15 [i_2] [i_2] [i_2] = ((-(arr_5 [i_4])));
                        var_22 = ((-(arr_14 [i_1] [i_2] [i_2])));

                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            arr_19 [i_1] = (((arr_6 [i_3] [i_4]) ? (arr_6 [1] [i_3]) : (arr_6 [i_1] [i_1])));
                            var_23 |= ((arr_1 [i_2]) ? (arr_1 [i_3]) : (arr_1 [i_4]));
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            arr_23 [i_6] [i_3] [i_3] [i_2] [i_6] = 10337;
                            arr_24 [i_6] [i_6] = arr_18 [i_6] [i_4] [i_3] [i_2] [i_1];
                            arr_25 [i_1] [1] [i_1] [4] [i_6] = ((~(arr_6 [i_1] [i_1])));
                            var_24 += ((10324 ? 10352 : ((10337 ? 10326 : (arr_14 [i_6] [i_4] [i_1])))));
                        }
                        var_25 += (((1 ? 55199 : -24896)));
                        var_26 = (min(var_26, ((((arr_5 [i_1]) ? var_18 : 1870)))));
                    }
                }
            }
        }
        var_27 &= (((var_16 || (arr_2 [i_1]))));
    }
    #pragma endscop
}
