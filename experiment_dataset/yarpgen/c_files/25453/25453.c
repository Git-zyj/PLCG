/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_0 - 2] [i_1] = ((+(((arr_8 [i_3] [0] [i_1] [i_0 + 1] [i_0]) ? (-9223372036854775807 - 1) : (arr_8 [i_0 - 1] [i_0 + 1] [i_2] [i_3] [2])))));
                            var_13 = (min(var_13, (arr_8 [i_0] [i_0] [4] [i_0 - 1] [i_0 - 1])));
                            arr_11 [i_0] = (((((65534 + -8) >= ((min(8, -110))))) ? ((((240 >= (arr_6 [i_2]))))) : ((((arr_1 [1]) ? (arr_2 [i_0 + 1] [i_2]) : (arr_4 [i_0] [i_1] [i_3]))))));
                        }
                    }
                }
                var_14 -= 225;
                var_15 -= var_7;
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 4; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_16 = ((~((223 ? -24 : ((((arr_1 [i_1]) > 253)))))));
                            arr_18 [9] [i_1] [i_4 - 1] [i_5] = (arr_16 [i_0] [i_5 + 1] [i_4] [i_0] [i_0] [i_5]);
                            var_17 = (min(var_17, (((-(((arr_13 [i_1]) | ((((arr_4 [i_0] [i_0] [i_0]) >= (arr_9 [i_0] [i_1] [i_4])))))))))));
                            var_18 = ((+(max((arr_0 [i_1]), (arr_17 [i_4 + 2] [i_1])))));
                        }
                    }
                }
            }
        }
    }
    var_19 = var_5;
    var_20 = min((((((var_9 ? 9223372036854775807 : var_10))) ? (((var_1 ? var_1 : 96))) : var_6)), 5);
    var_21 -= (((((max(var_1, var_10)))) % (var_2 | var_0)));
    #pragma endscop
}
