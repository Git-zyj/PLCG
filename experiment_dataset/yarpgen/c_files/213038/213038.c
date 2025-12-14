/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_5;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_20 = (max(var_20, (((((min(119, (arr_0 [i_0] [i_0])))) % (-32 % 255))))));
        var_21 = (((((arr_2 [i_0] [i_0]) + 2147483647)) >> ((3756120005 / (max(3180249688, 255))))));

        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            var_22 = ((-(((((~(arr_6 [i_1])))) ? 0 : 1701069330))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_16 [i_4] [i_1] [7] [i_1] [i_0] = (max((((~(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0])))), ((((16403807162777281356 <= 2474082727) != ((3756120005 ? 538847286 : 3876891498)))))));
                            arr_17 [i_1] = ((-((min(var_8, (arr_13 [i_0] [i_0] [0] [i_0] [i_0]))))));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            var_23 = (min(var_23, (((((var_16 ? (((-(arr_18 [i_0])))) : (arr_1 [i_0])))) ? (((!var_17) << (((((arr_15 [i_0] [i_0] [i_0]) ^ var_17)) - 11727973301358008003)))) : 7))));
            arr_20 [i_0] [i_0] [i_0] = (max(var_6, (0 + var_8)));
            arr_21 [i_0] = var_17;
        }
    }
    for (int i_6 = 3; i_6 < 9;i_6 += 1)
    {
        arr_25 [i_6] = (((arr_9 [i_6 + 1] [i_6] [i_6] [i_6 - 3]) ? (((arr_19 [i_6 + 1] [i_6 - 2]) * (arr_8 [i_6] [i_6] [10]))) : (arr_19 [i_6 + 1] [i_6])));
        var_24 = (+((((max((arr_2 [i_6] [i_6]), 1042162425))) ? (-125 - var_6) : (((arr_9 [i_6] [i_6] [i_6] [i_6]) ? var_1 : (arr_12 [i_6] [i_6] [i_6]))))));
    }
    var_25 -= -var_17;
    var_26 *= 32822;
    #pragma endscop
}
