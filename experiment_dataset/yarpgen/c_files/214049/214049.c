/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214049
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = (~0);
                var_11 = (min(var_11, (((~((~(arr_0 [i_0]))))))));
                arr_4 [1] [i_1] [i_0] = ((((((min(var_3, (arr_1 [i_1]))) + ((min((arr_0 [i_0]), (arr_2 [i_0]))))))) ? ((((-(arr_3 [i_0]))) * var_9)) : ((min((arr_2 [i_0]), (arr_2 [4]))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        var_12 = ((1 ? var_3 : (arr_7 [i_2] [i_2])));
        arr_8 [20] = (arr_5 [i_2] [i_2]);
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_13 = (min((min(-714942570706876459, -714942570706876459)), (arr_10 [i_3])));
        var_14 = ((((max((!4115), var_6))) != (min((~var_7), ((~(arr_7 [i_3] [i_3])))))));
        var_15 &= ((min((((arr_11 [i_3]) ? (arr_10 [i_3]) : (arr_10 [i_3]))), (arr_6 [i_3]))) & ((var_7 ? -61421 : var_7)));
        /* LoopNest 2 */
        for (int i_4 = 4; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                {
                    var_16 = (((((max((arr_9 [i_3]), 0))) ? ((min(var_5, var_2))) : 32767)));
                    arr_16 [i_3] [8] [i_5] [i_5] = (max(var_5, ((-(min((arr_5 [i_5] [i_5]), var_0))))));
                }
            }
        }
    }
    var_17 = ((((((var_4 ? var_0 : var_0)))) ? (min((min(var_7, var_8)), var_4)) : (!var_5)));
    #pragma endscop
}
