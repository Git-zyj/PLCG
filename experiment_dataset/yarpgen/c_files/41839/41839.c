/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 += ((min((~var_11), var_9)));
        var_20 = min((~var_7), ((((min(var_9, var_5))) ? (((var_8 ? var_8 : var_15))) : var_3)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [11] = (!var_18);
        var_21 = ((var_3 >> (min(((-6484177366108196249 ? 1745837936590958459 : 255)), 15))));
        arr_7 [i_1] [3] = ((var_3 ? -var_14 : (((65530 > (~var_11))))));
        var_22 = var_7;
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    arr_18 [i_2] = ((max(-1, (max(var_10, var_18)))));
                    arr_19 [i_2] [i_2] [8] = ((max(-103, 9223372036854775807)));
                    arr_20 [i_2] = 3968;
                    arr_21 [13] [i_4] [i_2] [i_2] = ((~((max(var_7, -1)))));
                    arr_22 [i_2] [i_3] [i_2] [i_4] = ((+(min((~var_5), var_0))));
                }
            }
        }
    }
    var_23 = (min(var_1, var_10));
    var_24 = ((!((min(var_9, (~22))))));
    #pragma endscop
}
