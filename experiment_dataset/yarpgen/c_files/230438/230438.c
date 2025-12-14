/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] = (arr_8 [i_0]);
                    arr_11 [i_0] [i_0] [i_0] = ((((var_3 < -19385) ^ (!-66))));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        arr_15 [i_0] [i_3] = ((var_7 - ((((max(-3246413808564706052, 52)) ^ -530346950)))));
                        var_16 = (min(var_16, (min((max(var_15, var_9)), (arr_1 [i_0])))));
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_20 [i_0] [i_0] [i_1] [i_2] [i_4] = (-2095298827099712245 - -8712689726447993264);
                        var_17 = (min(var_17, ((((var_4 / (~-22322)))))));
                    }
                }
            }
        }
    }
    var_18 = (min((~-22339), (max(-45790, ((max(var_10, 32767)))))));
    var_19 = var_2;
    var_20 = ((min(((65532 ? var_14 : 8712689726447993263)), -62)) & 32750);
    #pragma endscop
}
