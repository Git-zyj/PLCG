/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196867
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_11 = var_7;
            var_12 = var_10;
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_2] [i_1] [i_2] [i_3] = (~-6817633035119420522);
                        arr_13 [i_0 + 1] [i_2] = (((((((var_10 - (arr_2 [i_0] [1] [i_2])))) ? var_2 : var_6)) < ((max((arr_11 [i_0] [i_1] [i_2] [i_3] [i_1]), var_2)))));
                    }
                }
            }
        }
        var_13 = (((((var_2 ? var_10 : 2228149478))) * (((((-9223372036854775807 - 1) / 2066817818)) * var_6))));
        var_14 = (1242022543837734589 > 15531);
    }
    var_15 = 2066817818;
    var_16 |= (((((var_9 ? var_2 : var_10))) & (var_1 >> var_6)));
    #pragma endscop
}
