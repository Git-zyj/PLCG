/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_1] [i_1] [i_1] = ((var_5 ? (((((var_1 ? var_10 : var_5))) ? ((var_12 ? var_11 : var_5)) : var_2)) : var_0));
                            arr_12 [i_3] [i_1] [i_2] [i_3] = var_11;
                        }
                    }
                }
                arr_13 [i_0] [i_0] = ((((((var_10 <= var_7) ? ((var_5 ? var_12 : var_10)) : (var_14 >= var_8)))) ? var_14 : ((1409605033 ? 2234644688128594073 : 2885362280))));
            }
        }
    }
    var_15 |= (1409605033 == 1409605002);
    #pragma endscop
}
