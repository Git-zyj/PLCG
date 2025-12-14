/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [8] [10] [i_3 + 1] = ((((min(var_0, (arr_8 [i_0] [i_0 + 2])))) ? (((var_7 != (max((arr_9 [i_0] [i_0] [i_2 + 2] [i_2] [i_1] [9]), 5480957279981295202))))) : ((~((((arr_3 [i_0]) <= 8)))))));

                        for (int i_4 = 3; i_4 < 12;i_4 += 1)
                        {
                            var_18 = (max(var_18, var_5));
                            var_19 = ((!((min(8, (arr_6 [i_0 - 2] [i_2 + 2] [i_4 - 2]))))));
                        }
                        var_20 += (arr_0 [i_0 - 1]);
                        var_21 += (((((~((19 ? (arr_5 [i_0] [8] [i_0 - 2]) : 49386))))) || (((((max(8, var_7))) + 1)))));
                    }
                }
            }
        }
        arr_15 [i_0 + 2] = ((-((-((min(8, var_14)))))));
    }
    var_22 = (min(((-13122 ? var_15 : var_15)), -13117));
    var_23 = var_3;
    #pragma endscop
}
