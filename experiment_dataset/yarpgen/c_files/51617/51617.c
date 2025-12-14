/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [1] = var_4;
        var_18 = var_1;
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            {
                var_19 = (max(var_19, ((((((arr_1 [i_1]) && (arr_5 [i_1] [i_2]))) ? (max(var_5, (max(var_5, var_5)))) : (10 != 65535))))));
                var_20 = (!var_0);
                arr_9 [i_2] [i_1] [i_2] |= (((arr_8 [i_2] [i_2] [i_2]) ? (min(var_17, var_1)) : -5790538003576950878));
            }
        }
    }
    var_21 = ((var_14 ? var_14 : var_6));
    #pragma endscop
}
