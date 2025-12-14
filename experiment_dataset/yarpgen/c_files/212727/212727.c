/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((max(2147483647, 1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_19 = ((!((min((arr_1 [1]), 4027437898)))));

                for (int i_2 = 2; i_2 < 14;i_2 += 1)
                {
                    arr_8 [i_0] [i_2] [3] [i_0] = min((min(((((arr_7 [i_0] [i_1]) >= 0))), var_8)), var_15);
                    var_20 = ((-(arr_3 [i_2] [i_1 - 3])));
                    arr_9 [i_0] [i_1 - 1] [i_0] = (((var_12 ? (arr_0 [i_1 - 1] [i_0]) : ((var_7 ? 0 : var_7)))));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 17;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] = (((arr_6 [i_0] [i_1 - 2] [i_0]) ? (arr_6 [i_0] [i_1 - 4] [i_0]) : (arr_6 [i_0] [i_1 - 3] [i_3 - 1])));
                    arr_13 [i_0] = (((var_10 | (arr_1 [i_0]))));
                }
                arr_14 [12] [12] |= ((var_7 % (arr_7 [14] [i_1])));
            }
        }
    }
    var_21 = (max(-2147483647, 0));
    var_22 = ((((((var_3 <= 153) ? 6291456 : (min(var_6, var_17))))) ? (!1) : 61630));
    #pragma endscop
}
