/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = ((arr_2 [i_0]) ? (((((min((arr_3 [i_1] [i_1]), 3427808532)) == (arr_0 [i_1] [i_0]))))) : 4087224679148410315);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_2] [i_1] [i_2] [i_0] = (((~1) ? (((arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]) ? (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]) : (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]))) : 867158764));
                            var_18 = ((!(arr_0 [i_3] [i_0])));
                        }
                    }
                }
                var_19 &= (!1);
                var_20 = (max((((!(arr_1 [i_0])))), (arr_2 [i_1])));
            }
        }
    }
    var_21 = var_9;
    var_22 = var_14;
    #pragma endscop
}
