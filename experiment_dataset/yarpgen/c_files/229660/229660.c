/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(((var_12 ? var_14 : ((191 ? 59219 : 60965)))), var_14));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_16 = (75 != 884778596);
        var_17 ^= (var_8 < 43589);
        arr_3 [i_0] [i_0] = (((((65507 ? 196 : 52))) ? (((var_4 ? var_9 : (arr_1 [i_0])))) : 4294967293));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_18 = (((var_2 >> (7290 - 7283))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    {
                        arr_16 [i_1] = ((((max(65, (arr_10 [i_1] [i_1] [i_1] [i_4 - 1])))) ? ((max((arr_10 [i_1] [i_2] [i_1] [i_4 - 1]), var_6))) : var_5));
                        arr_17 [i_1] [i_2] [i_1] [i_3] [i_1] [i_4] = ((max(28, 216)));
                        var_19 = ((max((max(8997255286135109812, (arr_5 [10]))), ((max(var_5, var_13))))));
                    }
                }
            }
        }
    }
    var_20 = var_14;
    #pragma endscop
}
