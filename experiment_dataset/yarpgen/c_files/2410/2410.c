/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~var_4);
    var_15 *= ((var_0 ? var_1 : ((((var_7 ? var_3 : var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 ^= (((!(arr_1 [i_1 - 4]))));
                    arr_9 [i_0] [i_0] [i_0] = ((((max((arr_0 [i_1 - 4]), (arr_8 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_2])))) + (max((((arr_0 [i_1]) + var_5)), var_13))));
                    var_17 = (var_6 || ((min((!var_13), (max((arr_5 [i_1]), (arr_7 [i_0] [i_0] [i_1 - 4] [i_2])))))));
                }
            }
        }
    }
    var_18 = var_13;
    #pragma endscop
}
