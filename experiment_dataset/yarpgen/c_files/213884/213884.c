/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [i_0] = ((((((((arr_0 [i_1] [i_0]) ? (arr_1 [i_1]) : (arr_2 [i_1]))) + (((arr_2 [i_1]) ? 32767 : 36529))))) ? (arr_1 [i_0]) : 1));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_3] [17] [17] [i_3] [i_3] = 3633110694;
                            var_12 += ((40368 ? (arr_3 [i_2] [i_2]) : (((arr_1 [i_0]) ? (arr_0 [i_3] [i_3]) : (arr_7 [i_0] [i_2])))));
                            arr_12 [i_0] [i_0] [i_2] [i_3] = 2147918146;
                            arr_13 [i_0] [i_1] [i_2] [i_0] [i_0] = ((((((((38929 ? var_11 : (arr_1 [i_1])))) ? ((((arr_8 [i_0] [i_1] [i_0]) ? (arr_5 [i_0] [i_1] [i_3]) : (arr_1 [i_1])))) : (((arr_10 [i_0] [i_0] [i_2] [i_2]) ? (arr_3 [i_3] [i_1]) : (arr_5 [i_0] [i_0] [i_0])))))) ? ((((max((arr_3 [17] [1]), (arr_2 [i_0])))) ? (arr_3 [i_2] [i_3]) : -15)) : (((arr_9 [i_0] [i_0] [17] [i_0] [10] [i_0]) ? ((max(26607, 3473779452))) : var_5))));
                        }
                    }
                }
                var_13 = (min(((((max(var_5, 511))) ? (arr_5 [i_0] [i_0] [i_0]) : var_0)), ((max((arr_5 [i_0] [8] [i_0]), (((arr_2 [i_0]) || var_0)))))));
                arr_14 [i_0] = (max(((min(6286102278293854876, (((arr_2 [i_0]) ? (arr_1 [16]) : 38929))))), (((arr_6 [i_0]) * (((max((arr_0 [i_0] [i_0]), (arr_1 [i_0])))))))));
            }
        }
    }
    var_14 = var_7;
    var_15 = (min(var_6, (var_6 % var_5)));
    #pragma endscop
}
