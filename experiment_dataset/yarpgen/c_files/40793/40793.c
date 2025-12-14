/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40793
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((~(~0))) >> ((-(var_15 * 0)))));
    var_20 = (max(var_20, (((((~(-9 / var_14))) << (((((~var_14) % (~var_15))) - 3105430272)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((((((~var_8) <= (1 * var_17)))) % ((((~var_16) != (((~(arr_4 [i_0] [20] [4])))))))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_21 = ((~(~-var_10)));
                        arr_12 [i_3] [0] [i_2] [i_1] [i_0] = ((~((-(((var_17 <= (arr_3 [i_0] [i_1] [i_3]))))))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_17 [i_4] = (((~6) & (1 >> 1)));
                            var_22 = (~1);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            var_23 = (14133798008187603533 * 0);
                            var_24 = ((-(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        }
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        var_25 = (max(var_25, (((-(((255 || -7) % (((arr_20 [i_0] [i_0] [i_6] [i_6] [i_0]) ^ 0)))))))));
                        var_26 = (max(var_26, (((~((-(((var_4 != (arr_23 [i_6] [i_2] [i_0] [i_0])))))))))));
                    }
                }
            }
        }
    }
    var_27 = ((-((((((1 << (var_10 - 136)))) || (var_5 != var_0))))));
    #pragma endscop
}
