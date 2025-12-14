/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 = (min(var_18, ((max(8, 795555529)))));
                var_19 = (((0 > var_8) | (((arr_1 [i_0] [i_1]) & (arr_0 [i_1])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_2] = ((arr_7 [i_0] [i_0] [1] [i_0]) ? ((min(5, (~1)))) : (min((arr_1 [16] [12]), (arr_9 [i_3] [i_2] [i_0] [i_0]))));
                            var_20 = 5;
                        }
                    }
                }
            }
        }
    }
    var_21 = (min(var_21, (((-((min(((max(var_15, 1))), 111))))))));
    var_22 = (((!(((1 ? 2524983096 : 1970244988))))));
    var_23 = ((-(min(((252 ? var_4 : var_4)), ((var_8 ? var_15 : 7))))));
    #pragma endscop
}
