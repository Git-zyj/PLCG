/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((max(((var_9 ? 11874792450880385104 : var_3)), var_13)) + ((((min(var_1, var_1))) ? var_4 : var_12))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_4 [18] = min(((max((arr_3 [6] [i_0] [i_1]), var_10))), ((~(((arr_1 [i_0]) & var_4)))));
                arr_5 [i_0] [i_1] [i_1] |= (min(((((arr_0 [i_0]) | var_8))), var_13));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_0] [i_2] &= (arr_2 [i_2]);
                            arr_13 [i_0] [i_0] [i_2] [i_3] = (11874792450880385104 - var_12);
                        }
                    }
                }
                arr_14 [i_0] [4] |= var_3;
            }
        }
    }
    var_15 = (((-7005 ? 39 : 39)));
    var_16 = ((min(((var_2 ? 39 : var_9)), ((max(var_0, var_6))))));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            {
                var_17 ^= 1;
                var_18 = (arr_0 [i_4]);
            }
        }
    }
    #pragma endscop
}
