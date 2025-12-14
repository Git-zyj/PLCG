/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((var_8 ? var_3 : (var_16 ^ var_4))) | ((min(var_3, (2068493525 ^ 1))))));
    var_18 = ((-(42576 - 3680972875725178241)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_14 [3] [i_2] = ((~(((arr_6 [i_0] [i_0]) ? (arr_6 [i_0] [i_0]) : (arr_6 [i_2] [i_4])))));
                                arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] = (min((((-(arr_4 [13])))), ((max((arr_2 [i_2]), (arr_6 [i_0] [i_1]))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                var_19 = (min((min((-9113 & var_8), var_10)), var_5));
                                arr_22 [i_6] [i_5] [i_5] [i_5] [i_5] [i_0] [i_0] = ((-32760 != ((((arr_10 [i_0] [i_5] [i_1] [i_1] [i_0]) | -1829323509)))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 12;i_9 += 1)
            {
                {

                    for (int i_10 = 1; i_10 < 11;i_10 += 1)
                    {
                        arr_35 [i_7] [i_7] [i_8] [4] [4] [i_8] = (((min((~var_13), (((arr_17 [i_7]) | var_4))))) ? (((-(arr_25 [9])))) : 124);
                        var_20 = (max(var_20, ((((((((22613 + (arr_4 [i_10 - 1])))) ? (arr_0 [i_10 - 1]) : (arr_11 [i_7] [i_8] [0]))) + (((-((min(40277, -32767)))))))))));
                        var_21 = 12672;
                    }
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        arr_38 [i_8] [i_8] = -1;
                        var_22 = (max(-7837415276749843670, 3297464346));
                    }
                    var_23 = (arr_24 [i_7]);
                    var_24 *= (arr_5 [19] [i_9] [i_7] [i_7]);
                }
            }
        }
    }
    var_25 &= (var_8 || var_7);
    #pragma endscop
}
