/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_19 = (0 <= 65526);
                var_20 = ((((((arr_3 [i_1]) ? 505303087 : (arr_3 [i_0])))) || ((((arr_3 [i_1]) ? (arr_3 [i_1]) : var_15)))));
                var_21 = 3789664227;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_11 [i_3] [i_2] [i_2] [i_2] [5] [i_0] = var_8;
                            var_22 = 16301;
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 1; i_4 < 22;i_4 += 1)
    {
        var_23 = (max(-8406747518495422683, (-1 == 4)));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 25;i_6 += 1)
            {
                {
                    var_24 = (((((var_14 <= var_7) ? (!45036) : (arr_19 [i_4] [22] [i_4] [i_4]))) != (((65535 % -13115) ? var_10 : (arr_13 [i_4 - 1])))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 22;i_8 += 1)
                        {
                            {
                                var_25 = 218;
                                var_26 = ((~(arr_14 [i_4] [i_8 - 4])));
                                var_27 = (min(var_27, (arr_23 [i_4] [4] [i_4] [i_4] [i_4] [i_4] [i_4])));
                            }
                        }
                    }
                }
            }
        }
        arr_25 [i_4] = (((((51255 - 268435454) - (1 / var_17))) + 68717379584));
        arr_26 [i_4] = (((((-(arr_22 [24] [i_4] [18] [i_4] [i_4])))) ? var_18 : var_1));
        arr_27 [i_4] = 2015270819;
    }
    #pragma endscop
}
