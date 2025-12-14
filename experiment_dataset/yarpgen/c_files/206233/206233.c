/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] = (min(((max((arr_2 [i_1 - 1]), (arr_2 [i_0 + 1])))), (min(var_15, (arr_3 [i_0 - 2] [i_0 - 2] [i_0])))));
                var_18 = (~((((min((arr_3 [i_0] [i_0 - 3] [i_0]), var_10))) ? -550351703 : -550351696)));

                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    var_19 = (min(var_19, ((min(((((8446 >= 1) && ((min(1, (arr_6 [i_1 + 1] [i_2]))))))), ((var_16 / ((max(var_13, var_12))))))))));
                    arr_7 [i_0] [i_1 + 1] [i_0] = (((((var_7 ? var_3 : var_6))) ? (max((arr_3 [i_1 + 1] [i_0 - 3] [i_0]), (arr_3 [i_1 - 1] [i_0 - 3] [i_0]))) : (!-77)));
                    var_20 = (min(var_20, (((~(min(((min(var_5, var_6))), ((var_4 ? (arr_2 [i_2 + 1]) : var_11)))))))));
                }
            }
        }
    }
    var_21 = (min(var_9, ((((((0 ? 64 : 550351702))) && var_13)))));
    #pragma endscop
}
