/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53072
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (arr_0 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            arr_12 [i_1] [i_1] [i_2] [i_1] = ((!(arr_7 [i_0] [i_0] [i_0])));
                            arr_13 [i_0] [i_1] [i_2] [i_1] = ((20381 || (arr_5 [i_0] [i_0] [i_0])));
                        }
                    }
                }
                var_20 |= ((var_0 || (((((arr_1 [24]) ? var_0 : 4095))))));
                var_21 *= ((((max(var_9, (((arr_5 [i_0] [i_0] [i_0]) ? var_8 : (arr_1 [15])))))) ? (arr_11 [22] [i_0]) : (((arr_1 [5]) / (max(var_2, var_8))))));
            }
        }
    }
    var_22 = (((((~(49152 | var_10)))) ? (min((var_8 < var_16), var_8)) : (~var_14)));
    var_23 = (min(var_23, ((((var_8 - 45149) ? var_6 : var_5)))));
    #pragma endscop
}
