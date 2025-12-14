/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24685
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= ((var_11 >= ((~((min(var_16, var_16)))))));
    var_19 = var_14;
    var_20 = (min(var_20, 0));
    var_21 |= 18419441866339176699;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [i_3] [i_3] [22] [22] [i_0] [i_0] |= var_4;
                        var_22 = (max(var_22, (arr_5 [20])));
                        arr_11 [i_3 - 1] [i_2] [i_0] [7] [7] = ((-(((((-(arr_2 [i_0])))) ? -1 : var_7))));
                        var_23 = (((arr_6 [i_0] [i_1 + 2] [i_2]) ? ((~(arr_2 [i_3]))) : (!-var_14)));
                    }
                }
            }
        }
        var_24 = (min(var_24, (~15564017148329135002)));
        arr_12 [22] [i_0] |= (((var_12 ? -var_1 : 18419441866339176700)));
    }
    #pragma endscop
}
