/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43318
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, var_6));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 ^= (((arr_1 [i_0] [i_0]) || (((3233 ? (arr_0 [i_0] [i_0]) : (!20))))));
        var_17 = (max(var_17, 217));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    var_18 = (((!var_14) && ((((arr_7 [i_2] [i_2] [i_2]) ? (!var_5) : (min(-20, 1906916352)))))));
                    var_19 = (((arr_7 [i_1] [i_2] [i_3]) ? (arr_7 [i_1] [i_2] [i_3]) : (((arr_3 [0]) + 27846))));
                    var_20 = (max(var_20, var_7));
                    arr_9 [i_1] [i_2] [1] [i_1] = (min(var_0, (((arr_2 [i_1]) ? (arr_2 [11]) : (arr_2 [i_1])))));
                }
            }
        }
        arr_10 [i_1] = var_13;
    }
    var_21 = ((!(((var_13 ? var_10 : var_3)))));
    var_22 = var_7;
    #pragma endscop
}
