/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((var_12 * (((!((min(var_9, -25666))))))));
    var_19 = (max(var_19, var_13));
    var_20 = (min(var_20, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_21 = (min(var_21, (((~(((arr_9 [i_2] [i_1] [i_2]) ? (arr_9 [i_0] [15] [i_0]) : (arr_9 [1] [i_2] [i_0]))))))));
                            var_22 = (min(var_22, (max(25685, (!var_12)))));
                        }
                    }
                }
                arr_10 [11] = (((((var_17 ? 7075 : ((-(arr_4 [i_1] [17] [i_1] [6])))))) ? (((arr_5 [10] [i_0] [11] [i_0]) ? 2940 : var_16)) : (((!((min((arr_4 [14] [1] [4] [i_1]), (arr_3 [21] [i_1] [14])))))))));
            }
        }
    }
    #pragma endscop
}
