/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25023
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((var_6 ? (var_2 * 1353) : var_7)), -110));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                var_19 = (((var_10 ? (arr_3 [i_0] [6]) : (arr_3 [i_1] [i_0]))));
                var_20 = ((((max((arr_6 [i_1] [i_1] [i_1]), (max((arr_8 [3] [3] [i_2]), var_5)))))) - ((1 ? 7981572588385089312 : 1353)));
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        {
                            var_21 = (max(((((arr_3 [i_0] [i_4]) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [7]) : (((arr_6 [i_4] [i_1] [i_0]) & var_14))))), (min(-42, (((arr_14 [i_0] [i_1] [1] [i_3] [i_2] [i_3]) / 64182))))));
                            var_22 *= min(var_17, -24678);
                        }
                    }
                }
            }
            var_23 = ((((max(((max(var_0, 19423))), ((64182 ? var_0 : var_2))))) ? ((((arr_9 [i_0] [i_1] [i_0] [i_1] [i_1]) == (arr_9 [i_0] [i_0] [i_0] [i_1] [i_1])))) : (!var_11)));
        }
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 10;i_7 += 1)
                {
                    {
                        var_24 = var_4;
                        var_25 ^= var_7;
                        var_26 = (max(var_26, (((+(max((min((arr_11 [i_0] [i_5] [i_6] [i_6] [i_0] [i_6]), 1)), ((max((arr_22 [i_0] [i_0] [i_5] [i_6] [i_7]), var_2))))))))));
                        arr_24 [i_0] [i_5] [i_6] [i_7] = (min(var_2, (arr_12 [i_7] [i_5] [i_5] [i_7] [i_7] [i_7])));
                    }
                }
            }
            arr_25 [i_5] [i_5] = (min((((arr_3 [i_0] [i_5]) ? (arr_3 [i_0] [i_0]) : var_6)), (arr_3 [i_0] [i_5])));
            var_27 = (max(var_27, (((((((((var_4 ? 285418227044804306 : var_8))) ? (var_0 & var_1) : var_2))) <= ((((min(64182, var_12))) ? (max(64209, var_3)) : var_3)))))));
        }
        var_28 = (((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))) * (((var_13 ^ 6848044561051116033) ? ((1 >> (((arr_20 [i_0] [i_0]) - 13165876969681671059)))) : (!1358)))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 10;i_9 += 1)
            {
                {
                    var_29 *= var_12;
                    arr_30 [4] [8] [0] = ((((((((~(arr_18 [2]))) <= 65531)))) == (max((arr_11 [4] [i_8] [i_8] [i_9] [i_8] [i_8]), ((13700 ? (arr_14 [i_0] [i_0] [4] [i_0] [i_9] [i_9]) : var_1))))));
                }
            }
        }
    }
    #pragma endscop
}
