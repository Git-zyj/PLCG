/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4265
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_3 [4] = var_17;
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_19 = (min((arr_10 [i_0 - 1] [i_1] [6] [20] [i_3]), ((0 ? ((~(arr_1 [i_0 - 2]))) : (arr_4 [i_0 + 3])))));
                        var_20 *= (min((((((-(arr_7 [i_0] [15])))) / (arr_2 [i_0 - 2] [i_0 - 1]))), (arr_5 [17] [17] [17])));
                        var_21 -= ((((arr_8 [i_0] [i_1] [12]) && (arr_9 [i_0] [0] [i_1] [5] [i_2] [18]))));
                        arr_11 [i_3] [16] [i_2] [i_2] [i_0] [i_0 + 3] = (((((arr_4 [i_0 - 3]) ? 13831368017908357006 : var_1))) ? (((((var_6 ? var_14 : (arr_7 [i_1] [i_1])))) ? ((((arr_0 [i_1]) != var_9))) : (arr_8 [i_3] [i_2] [1]))) : (((((min(-1, var_7)) + 2147483647)) >> ((((max((arr_9 [i_0 + 2] [i_0 + 2] [i_2] [i_0 + 2] [i_3] [i_3]), 16128))) - 16099)))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        arr_15 [i_4] = 27749;
        var_22 = (((arr_0 [i_4]) ? ((((((1422860946 != (arr_13 [i_4] [i_4])))) ^ var_8))) : ((((((arr_2 [i_4] [i_4]) | (arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4])))) ? -var_17 : ((min(-1422860946, var_2)))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                var_23 = var_13;
                var_24 |= ((((arr_17 [i_5] [i_5 - 1]) ? (arr_17 [i_5 + 2] [i_5 - 1]) : var_0)));
                arr_22 [i_6] [i_5] = (min((min(1422860931, ((9 + (arr_17 [i_5 + 2] [i_5 + 2]))))), (((var_18 ? 1 : (arr_21 [i_5] [i_5]))))));
                arr_23 [i_5] [i_6] [i_6] = -21401;
                arr_24 [i_5] [1] = (min((max(22942, var_18)), (arr_18 [i_5 + 1] [i_5 - 1])));
            }
        }
    }
    var_25 = ((((min((((44150 ? 90 : (-32767 - 1)))), (min(var_4, var_12))))) ? var_7 : ((var_10 ^ ((max(15914, 0)))))));
    var_26 = ((~((min(var_14, (28704 && 2147483647))))));
    #pragma endscop
}
