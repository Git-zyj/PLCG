/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= (((((~((var_0 ? var_8 : var_0))))) ? (min(((var_9 ? var_3 : 44717)), (1419536177 <= var_2))) : ((var_2 ? var_3 : ((max(var_5, 20427)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    var_12 &= (arr_3 [7] [2] [i_2 - 1]);
                    var_13 = var_3;
                }
                arr_8 [i_1] = var_4;
                var_14 = (arr_0 [i_0] [i_0]);
                arr_9 [24] = ((var_4 < ((var_4 % ((65535 ? var_6 : var_3))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            {
                arr_15 [i_3] [i_4] = (max((max(var_0, (arr_5 [i_3] [10] [i_4]))), -var_5));
                arr_16 [3] [i_4] &= (((arr_3 [i_4] [i_3 - 2] [i_3 + 1]) | (arr_11 [i_4] [i_3 + 1])));
            }
        }
    }
    #pragma endscop
}
