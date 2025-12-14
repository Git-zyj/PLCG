/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= var_9;
    var_13 = ((((((((var_3 ? var_2 : var_6))) ? ((max(var_11, var_5))) : var_5))) ? ((var_6 ? 8655818028610613040 : 1)) : var_0));
    var_14 = ((~(((var_2 + 2147483647) >> ((((var_0 ? var_3 : var_11)) - 17682))))));
    var_15 = ((min(var_1, var_4)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0 - 1] = ((((min((arr_2 [i_0 + 1] [i_0 + 2]), (arr_3 [i_0 - 2] [i_0 - 2])))) ? (((arr_1 [i_0 - 1] [i_0 + 2]) << (((arr_1 [i_0 + 1] [i_0 - 2]) - 18259371329780772718)))) : (min((arr_0 [i_0 - 1] [i_0 - 2]), (arr_1 [i_0 - 2] [i_0 + 2])))));
                var_16 = ((!((((arr_1 [i_0 + 2] [i_0 - 2]) & (arr_1 [i_0 + 1] [i_0 - 2]))))));
                arr_5 [i_0 - 2] &= ((~((~(arr_3 [i_1] [i_0 + 1])))));
                var_17 = (!1);
            }
        }
    }
    #pragma endscop
}
