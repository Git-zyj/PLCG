/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_18, (((var_6 ? (var_10 & var_8) : var_16)))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 = (arr_5 [i_0] [7] [i_2]);
                    var_20 = (max(var_20, (((-113 < ((var_4 ? var_9 : var_12)))))));
                }
            }
        }
        var_21 = (min((((5178853877799217536 <= (((arr_2 [7] [i_0 - 2]) ? var_16 : 1))))), (arr_5 [0] [0] [i_0])));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_22 ^= ((((var_3 >= var_12) ? var_14 : var_16)));
        arr_9 [22] |= (arr_8 [21] [i_3]);
    }
    #pragma endscop
}
