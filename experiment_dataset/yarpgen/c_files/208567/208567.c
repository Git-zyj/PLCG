/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (max(1, var_11));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (((min(13416005594303091833, (((1 ? var_12 : -4614659718462486440)))))) ? (-2063509491 % 1) : (((max((arr_1 [i_0]), (arr_2 [i_0]))))));
        arr_4 [i_0] = ((!(((((min((arr_2 [i_0]), (arr_0 [i_0])))) / ((-31804 ? var_11 : var_1)))))));
        var_21 = ((~(max(-4614659718462486440, var_3))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_22 = ((~(~var_19)));
        arr_9 [i_1] [i_1] = 16383;
        var_23 = (~-2670309629785563838);
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 12;i_3 += 1)
            {
                {
                    arr_16 [i_1] [i_2] [i_2] = ((max((-2063509491 < -649638031238205463), 22835)));

                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        var_24 = (((1 / ((684382388 ? -29014 : 4614659718462486445)))));
                        var_25 = (((-(max(var_16, 13416005594303091833)))));
                        arr_21 [13] [i_4] [i_2] [i_2] [i_2] [13] = (max(((min(1164652433, (arr_2 [i_4])))), (min(152, -var_0))));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_26 += ((!((max((arr_5 [i_1] [0]), -209940863)))));
                        var_27 = (!var_18);
                        var_28 = (((((arr_19 [i_1] [i_3]) | -4))) + (((var_0 == var_7) ? (arr_1 [i_1]) : ((var_19 ? (arr_0 [i_1]) : var_1)))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
