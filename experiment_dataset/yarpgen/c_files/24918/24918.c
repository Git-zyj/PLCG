/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = 19144;
                arr_6 [5] [5] = var_12;
                arr_7 [i_0 - 1] [7] [i_1] = (((~((var_13 ? 181 : 10392487689055253228)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                var_17 = min((arr_11 [i_3 + 1]), ((~(arr_11 [i_3 + 1]))));
                arr_14 [i_2] [i_2] = (var_3 >> (((((arr_13 [i_3 + 3]) ? (arr_12 [i_3 + 1] [i_3 + 2] [i_3 + 2]) : (arr_12 [i_3 - 1] [i_3 + 3] [i_3 - 1]))) - 13939301477343548788)));
                arr_15 [1] = 247;
                var_18 |= ((((33554431 ? ((((arr_10 [i_2] [i_3 - 1]) || (arr_12 [9] [i_2] [i_3])))) : -var_1)) * (arr_10 [i_2] [i_3])));
            }
        }
    }
    var_19 = ((var_7 ? (((~(~1)))) : ((-(var_7 / var_9)))));
    var_20 = (var_8 & var_12);
    #pragma endscop
}
