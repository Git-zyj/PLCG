/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;
    var_16 = var_0;
    var_17 |= ((-((var_10 ? var_10 : var_9))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_2] [i_3] [1] [i_2] = ((((((((arr_3 [10] [1]) && var_7)))) ^ (max(var_13, var_1)))) < (((-((max(38641, 1)))))));
                            arr_12 [i_2] [12] [i_1] [i_0] [i_2] = (max(((((1 && 26878) < 32760))), var_13));
                            var_18 = arr_0 [i_2] [i_2];
                            var_19 = (arr_10 [i_2] [i_1 - 1] [i_2]);
                        }
                    }
                }
                var_20 |= var_10;
                var_21 = (arr_7 [i_0] [i_1]);
                arr_13 [i_0] = ((!(arr_2 [i_1])));
                var_22 = (((!(arr_0 [i_1 + 1] [i_1 + 1]))));
            }
        }
    }
    #pragma endscop
}
