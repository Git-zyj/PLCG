/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 &= var_1;
                    arr_9 [i_0] [i_1] [i_0] [i_1] = (min(((((arr_3 [i_2]) >= (min((arr_1 [i_0]), 1696510931))))), ((((58461 && (arr_8 [i_0] [i_0] [i_0] [i_0]))) ? (((var_3 >> (3117414333 - 3117414324)))) : (arr_7 [i_0] [i_1] [i_1] [14])))));
                    var_17 = (((arr_3 [9]) ? ((((var_8 != (arr_2 [i_0] [i_0] [i_2]))) ? ((((arr_5 [i_0] [i_1]) + var_8))) : (((arr_4 [i_0] [i_2]) ? (arr_2 [i_0] [i_1] [i_2]) : 14991593386241227148)))) : (((((min((arr_6 [i_0] [i_0]), var_15))) ? (((arr_6 [i_0] [i_1]) ? var_0 : (arr_0 [i_0]))) : (arr_0 [i_0]))))));
                    arr_10 [i_0] = (((arr_5 [i_0] [i_1]) % (arr_5 [i_0] [i_1])));
                    var_18 = (min(var_18, ((max((min(var_2, (max(var_1, (arr_2 [i_1] [i_1] [i_2]))))), ((((arr_6 [i_0] [i_2]) ? (arr_6 [i_0] [i_1]) : (arr_6 [i_0] [i_0])))))))));
                }
            }
        }
        var_19 ^= ((((arr_2 [i_0] [i_0] [i_0]) != 342950073)));
        var_20 = (min(var_12, var_4));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            {
                var_21 ^= ((((((((var_3 ? 139 : (arr_11 [i_3] [i_4])))) ? (3002444841 ^ var_10) : var_2))) ? (((arr_14 [i_3] [i_3] [i_3]) ? var_1 : ((max(127, var_9))))) : (((~(arr_14 [i_3] [i_4] [i_4]))))));
                var_22 = (((!7079) == (((arr_11 [i_3] [i_4]) * ((-(arr_11 [i_3] [i_3])))))));
            }
        }
    }
    var_23 = (+(min((var_14 && var_4), -var_12)));
    #pragma endscop
}
