/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_9;
    var_18 = ((var_12 ? (!var_10) : (((var_12 != ((var_13 ? (-2147483647 - 1) : 255)))))));
    var_19 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_20 = 4;
                var_21 = (((arr_5 [i_0] [i_0] [i_1]) != (((((252 ? var_3 : (arr_4 [i_0])))) ? (((~(arr_4 [i_0])))) : ((var_10 ? var_4 : var_13))))));
                var_22 = (arr_2 [i_1]);
                arr_6 [i_0] [i_1] = (max((max((max(253, (arr_4 [i_0]))), (arr_5 [i_0] [i_1] [i_0]))), (((((!(arr_3 [i_0]))) && var_7)))));
            }
        }
    }
    var_23 = ((var_10 % ((~((max(var_13, var_1)))))));
    #pragma endscop
}
