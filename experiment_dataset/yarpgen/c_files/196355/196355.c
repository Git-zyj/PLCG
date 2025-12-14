/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = ((!((((((var_10 >> (576460752303422976 - 576460752303422965)))) ? 5054386431673409786 : var_4)))));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = ((~(arr_5 [i_0] [i_0] [i_1 - 1] [i_2])));
                    arr_9 [i_2] [i_2] [i_2] [i_2] = arr_1 [i_0] [i_1];
                    var_19 = (((((((((arr_3 [i_0] [i_1 + 1] [i_2]) ? (arr_4 [i_0]) : var_0))) ? (max(var_11, var_1)) : (arr_4 [i_0])))) ? ((((((arr_3 [i_2] [i_0] [i_0]) ? var_13 : (arr_1 [11] [11])))) / 351267287182932024)) : (!19573)));
                }
            }
        }
    }
    var_20 = (!var_5);
    #pragma endscop
}
