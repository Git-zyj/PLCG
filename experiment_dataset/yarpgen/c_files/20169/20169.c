/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        var_14 = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 *= 3810664876;
                    var_16 = (max(var_16, var_10));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_1] = (((((max(var_6, var_4)) / (((var_4 ? var_2 : 75)))))) ? (((((arr_5 [i_0] [i_2]) == (~3810664876))))) : ((1506506900 ? (arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0]) : (arr_7 [i_0] [i_0 - 2] [i_0 - 1] [i_0]))));
                        var_17 = (max(var_17, (((var_6 >> ((((~((max(var_0, var_10))))) + 137)))))));
                    }
                    arr_13 [i_0] [i_2] = ((var_12 ? var_7 : var_9));
                    var_18 -= (min((((((-(arr_5 [0] [0])))) ? var_11 : ((var_6 ? var_2 : var_1)))), (arr_4 [i_2] [i_1] [i_0])));
                }
            }
        }
        arr_14 [i_0] = var_10;
    }
    var_19 = var_11;
    var_20 *= var_2;
    #pragma endscop
}
