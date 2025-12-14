/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min((((var_7 && (!var_9)))), 16749));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    var_16 = (arr_5 [7]);
                    var_17 = (arr_3 [i_0] [i_0]);
                    arr_9 [i_1] [i_1] &= ((-(min(var_10, (arr_2 [i_2 - 2])))));
                }
                arr_10 [1] = (((~-59) ? (((max(13, 86)))) : ((12845732742601682596 ? var_10 : -20))));
                var_18 *= (((((arr_0 [i_0]) == 1476727888)) ? ((((arr_4 [i_0]) / -var_8))) : (max((arr_8 [0] [0] [10]), (arr_7 [i_0] [i_1])))));
            }
        }
    }
    var_19 = ((var_14 ? ((var_5 ? var_4 : 1293982295)) : var_2));
    #pragma endscop
}
