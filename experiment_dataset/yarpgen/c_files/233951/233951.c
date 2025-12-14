/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (((((((min(var_14, 50534))) <= ((min(1, 50509)))))) >> (((~15482109773304496915) - 2964634300405054669))));

                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    var_19 -= 5182781534988756140;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] = 9371;
                                var_20 = 15002;
                                arr_14 [i_4] [i_3] [14] [i_0] [i_0] |= (arr_1 [i_1]);
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] = (!15001);
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    var_21 = (max(var_21, (arr_10 [i_0] [2] [10] [0] [6])));
                    var_22 = (((arr_9 [i_0] [i_0 - 1] [10] [i_5]) ? var_3 : var_2));
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 19;i_7 += 1)
                    {
                        {
                            var_23 ^= (((((~((max((arr_11 [2] [i_1] [i_1] [i_1] [i_6] [i_1]), 50535)))))) ? var_11 : ((4826608566067356648 ? 57 : 50534))));
                            var_24 = (max(var_24, -255));
                            arr_23 [i_0] [i_0] [i_1] [i_0] [11] [i_0] = 255;
                        }
                    }
                }
            }
        }
    }
    var_25 = (min(var_25, 50534));
    var_26 = ((((((max(61171, 50527))) || ((min(var_11, var_0))))) ? ((((max(22090, 24))) ? var_14 : (!var_4))) : (((var_6 || (var_4 || var_0))))));
    #pragma endscop
}
