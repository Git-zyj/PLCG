/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 &= (!-var_10);
    var_13 = (var_9 == var_11);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_14 = (((arr_1 [i_0]) ? (max((arr_6 [i_0]), 4294967263)) : var_1));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_15 = var_5;
                        var_16 = (((((min(0, (arr_0 [i_0]))))) == (arr_6 [i_0])));
                        arr_10 [i_3] [i_0] [i_0] = (max(((((arr_8 [i_3]) ? (arr_5 [i_2]) : (arr_5 [i_0])))), (((arr_8 [i_1 + 1]) ? 4294967295 : var_6))));
                    }
                    arr_11 [i_0] [i_0] = ((!(((4294967295 ? var_9 : var_7)))));
                }
                var_17 = ((863981399 > (~2514164109)));
            }
        }
    }
    #pragma endscop
}
