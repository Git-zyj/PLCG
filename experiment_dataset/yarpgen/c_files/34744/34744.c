/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 += var_3;
                            arr_13 [i_2] = ((!(((32768 ? 329794730 : 4294967289)))));
                        }
                    }
                }
                var_15 = (min(((56 ? var_6 : var_6)), (arr_1 [i_0])));
                var_16 = var_6;
            }
        }
    }
    var_17 = var_10;
    var_18 = ((-(min(-1, var_0))));
    #pragma endscop
}
