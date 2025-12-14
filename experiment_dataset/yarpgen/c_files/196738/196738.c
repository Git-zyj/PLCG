/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (arr_1 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 -= ((~(arr_7 [i_0])));
                    var_15 ^= ((((((13246253351701419235 << (11732796023205634414 - 11732796023205634406)))) ? (!6713948050503917224) : 10146)));

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_16 += (max((min((arr_1 [i_1 - 1]), (arr_9 [i_0 - 2] [i_3] [i_2]))), ((((((var_2 && (arr_1 [1])))) << (((arr_10 [13]) - 1073864137)))))));
                        var_17 ^= (arr_2 [i_1 + 1]);
                        var_18 = ((((((var_0 ? (arr_10 [i_0]) : (arr_13 [i_0]))) | (10147 % var_2)))) ? (arr_10 [i_1]) : ((((!(arr_6 [i_2] [i_1] [i_0]))) ? (arr_7 [i_0 - 1]) : (-10146 || var_13))));
                        var_19 ^= (arr_2 [i_0 - 1]);

                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            var_20 ^= 3955272466967028142;
                            var_21 ^= (1716933878 / 6713948050503917202);
                        }
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            var_22 = (arr_10 [i_0]);
                            var_23 = (max((max((arr_4 [i_1 + 1] [i_1 - 1]), (arr_9 [i_1 - 1] [i_1 + 1] [i_1]))), ((((arr_4 [i_1 + 1] [i_1 + 1]) - (arr_4 [i_1 + 1] [i_1 - 1]))))));
                            arr_18 [i_5] [i_3] [i_3 + 1] [i_2] [8] [i_0] = (((((((((arr_10 [8]) ? 10162 : (arr_6 [3] [i_2] [i_1])))) ? (arr_14 [i_5] [3] [i_0]) : (arr_14 [1] [i_1] [12])))) ? 1 : ((min(var_12, (((arr_2 [i_2]) < 230)))))));
                        }
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_24 = (max(((~(arr_4 [i_2] [i_6]))), -10156));
                        var_25 = max(((((-1937280168 ? 44125 : 10162)))), 13368362552370149043);
                    }
                }
            }
        }
        arr_21 [i_0] = ((~(arr_20 [i_0 + 1] [i_0 + 1] [i_0] [i_0])));
    }
    var_26 = (~var_6);
    #pragma endscop
}
