/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -235;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = (max(2147483647, (~47380)));

                /* vectorizable */
                for (int i_2 = 2; i_2 < 24;i_2 += 1)
                {
                    var_15 = (((arr_5 [i_2 + 1] [i_1 - 1]) != (arr_1 [i_0] [i_0])));
                    var_16 |= (((arr_3 [i_1 - 1] [i_1 - 1]) << 0));
                }
                arr_8 [i_0] [i_1] = var_9;

                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_17 = (min((arr_11 [i_0] [i_0] [i_3] [i_1 - 1]), ((var_5 ? var_7 : 0))));
                    var_18 = (max(var_18, (((-((((((var_8 ? 112 : (arr_5 [i_0] [i_1])))) && ((max(var_2, (arr_11 [i_0 - 2] [i_1] [i_1] [i_3]))))))))))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_15 [i_1] [i_1] = ((~((var_12 ? (arr_7 [i_0] [i_1] [i_4]) : (arr_2 [i_0] [i_0] [i_0 + 2])))));
                    var_19 |= ((9653828833579442416 ? ((~(arr_3 [i_0 + 1] [i_1]))) : (arr_2 [i_0] [i_1] [19])));
                    arr_16 [i_1] [i_1] [23] = (arr_1 [i_1] [i_0 + 3]);
                }
            }
        }
    }
    #pragma endscop
}
