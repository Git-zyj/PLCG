/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    var_17 *= ((!(((var_11 | (arr_0 [i_0] [i_1]))))));
                    arr_9 [i_0] [i_0] [i_2] = 15;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    var_18 -= var_0;

                    /* vectorizable */
                    for (int i_6 = 4; i_6 < 10;i_6 += 1)
                    {
                        var_19 = 4294967266;
                        arr_20 [10] [7] [10] [i_4] [i_6] [i_4] = var_8;
                        arr_21 [5] [5] [i_6] [5] = 19276;
                        var_20 *= (arr_19 [i_5] [i_6 + 1] [10] [i_6 - 2]);
                    }
                }
            }
        }
    }
    var_21 = ((var_10 ? ((max(var_12, var_15))) : ((4294967271 ? var_5 : var_12))));
    #pragma endscop
}
