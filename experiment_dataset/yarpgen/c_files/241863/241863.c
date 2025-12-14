/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 = var_14;
                            arr_11 [i_3] [i_2] = (((((((arr_1 [i_0]) ? (arr_5 [i_0] [i_3] [i_0 + 1] [i_3]) : var_6))) ? (((var_0 ? (arr_6 [i_0 - 2] [8] [i_3]) : (arr_3 [13])))) : ((var_1 ? (arr_6 [i_1] [i_2] [i_3]) : var_2)))));
                            var_16 = var_6;
                        }
                    }
                }
                arr_12 [i_1] = (arr_1 [i_0 - 2]);
                var_17 = (max((((((max((arr_0 [i_0] [i_1]), (arr_2 [16])))) ? (!var_9) : (arr_1 [i_0 - 2])))), var_1));
            }
        }
    }
    var_18 = (min(var_18, (((max((min(var_5, var_14)), (((62 ? var_3 : 222)))))))));
    var_19 -= ((~(((!(var_14 || var_6))))));
    #pragma endscop
}
