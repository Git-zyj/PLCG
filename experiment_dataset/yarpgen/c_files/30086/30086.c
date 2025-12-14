/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30086
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_17 |= (min((var_16 < 0), (arr_4 [i_2 + 1] [i_2 + 1] [i_0 + 1])));
                    var_18 = ((+(((arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1]) ? var_5 : var_13))));
                    var_19 = (((((var_8 ? (arr_1 [i_0 - 1]) : var_12))) | (max((min(var_8, var_11)), ((max(252, (-127 - 1))))))));
                    var_20 = var_14;
                    var_21 = (((+((max((arr_5 [i_1] [i_2]), (arr_4 [i_0] [i_1] [i_2])))))));
                }
            }
        }
    }
    var_22 -= ((+((max((var_16 != var_3), var_9)))));
    #pragma endscop
}
