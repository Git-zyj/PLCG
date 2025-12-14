/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_5 > (((-60 / (175 && 88))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_2] [i_2] [i_3] [i_2] = (var_0 & -124);
                                var_14 = (~164);
                                var_15 *= (!var_8);
                            }
                        }
                    }
                    var_16 = (max(var_16, (((var_1 + (!var_9))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 4; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        {
                            var_17 = ((var_5 != (((((-2282 != var_9) > (arr_16 [i_5] [i_6])))))));
                            var_18 = (arr_18 [i_5] [i_5]);
                            var_19 = (~2147483647);
                            var_20 = ((var_0 > (var_6 >> var_4)));
                        }
                    }
                }
                var_21 = ((var_0 * (arr_22 [i_5] [i_5] [i_5])));
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        {
                            arr_29 [i_5] [i_5 + 2] [i_5] [i_5] = (-(arr_24 [i_6] [i_10]));
                            var_22 = (min(var_22, (((!((((((arr_15 [i_10]) >> (var_8 - 47884788))) & 88))))))));
                            var_23 = ((-((((arr_17 [i_5] [i_6]) < (var_4 && var_1))))));
                            var_24 = (((((-(var_12 || var_0)))) >= (arr_27 [i_9] [0] [i_9] [8] [8] [0])));
                        }
                    }
                }
                arr_30 [i_6] [i_5] = -var_0;
            }
        }
    }
    var_25 = ((var_3 > (var_1 - var_3)));
    #pragma endscop
}
