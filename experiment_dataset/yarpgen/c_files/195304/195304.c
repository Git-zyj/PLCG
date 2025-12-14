/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195304
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 14;i_2 += 1)
            {
                {
                    arr_9 [i_0] &= min((max((((arr_6 [i_1] [i_2]) ? 8 : var_8)), 344254493)), (((max((arr_1 [i_0] [i_1]), (arr_4 [i_1] [i_2]))))));
                    var_17 *= ((((~1) == 3950712802)));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    arr_20 [i_3] [i_4] [16] [i_5] = (arr_17 [i_3] [i_4] [i_4]);
                    arr_21 [i_3] [14] [i_5] = var_3;
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 23;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 23;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 22;i_10 += 1)
                        {
                            {
                                var_18 = (min((((((max(var_11, var_3))) || ((min((arr_24 [i_6]), (arr_25 [i_8]))))))), ((((~(arr_27 [i_6]))) << ((((~(arr_30 [i_7] [i_9] [i_8] [i_7]))) + 51))))));
                                var_19 = (max(var_19, ((((((1 || (var_13 ^ var_0)))) << (((arr_34 [i_8] [i_10 - 1] [i_10] [3] [i_10 + 1]) - 79)))))));
                                arr_37 [i_10] = (~(max((arr_26 [i_6] [i_7] [i_10 + 1]), var_8)));
                            }
                        }
                    }
                    arr_38 [i_6] [i_6] [i_7] [i_8] = ((((((arr_26 [i_6] [i_7] [i_8]) / (arr_23 [i_6] [i_6])))) ? (max((max((arr_23 [i_6] [i_7]), (arr_26 [7] [i_7] [i_8]))), (((1 << (((arr_26 [1] [i_7] [i_8]) - 24139))))))) : (((1 ? 4269937209 : 4)))));
                }
            }
        }
    }
    var_20 = (59 > 63);
    #pragma endscop
}
