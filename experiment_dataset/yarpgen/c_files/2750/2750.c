/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, ((((~((14048165865259977978 << (247 - 218)))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = (max(var_8, (arr_6 [i_0])));
                    var_21 = (min((((8446387223133307287 ? 536870911 : (arr_7 [i_2 - 1] [i_0] [i_0] [i_0 - 1])))), (var_8 ^ var_3)));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_22 += 3758096397;
                        arr_12 [i_0] = (((((1 ? -56 : 1))) | (arr_5 [i_1] [i_2 + 1])));
                        var_23 = (min(var_23, ((((((arr_5 [i_1] [i_2]) | 255)) < 536870888)))));
                        var_24 += (--8640);
                        var_25 = ((~(~3758096389)));
                    }
                    var_26 = (max(var_26, ((((arr_1 [1]) | (min(var_10, (arr_6 [12]))))))));
                }
            }
        }
    }
    #pragma endscop
}
