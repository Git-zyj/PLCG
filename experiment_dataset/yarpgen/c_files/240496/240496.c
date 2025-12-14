/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240496
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= min(var_8, var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = (max(var_12, 17998248481468243265));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_13 -= ((var_4 ? ((~((-(arr_0 [i_1] [i_2]))))) : -8921323299515260065));
                    var_14 = ((~(max(((var_3 ? var_3 : var_3)), (8921323299515260051 != 8921323299515260065)))));
                }
                var_15 = (((+((-38 ? (arr_1 [i_0]) : (arr_7 [8] [i_0] [i_1]))))));
                var_16 = min(23, ((((arr_0 [i_0] [i_0]) - 15933361955432094458))));
            }
        }
    }
    #pragma endscop
}
