/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_0 >> (var_16 - 1420)));

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = ((15164087556820335914 - ((((arr_3 [i_0]) - ((max((arr_2 [i_0] [i_0 - 1]), 19048))))))));

        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 16;i_3 += 1)
                {
                    {
                        var_19 = ((((((7 <= (((arr_1 [13]) >> 0)))))) - ((18446744073709551615 | ((((arr_7 [i_0]) ? 52503 : -1)))))));
                        var_20 &= ((max((arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_0 + 1]), (arr_8 [i_0 + 2] [i_1 + 1] [i_1] [i_3 + 3]))));
                        var_21 = ((18446744073709551615 == (((((arr_5 [i_0] [i_0] [1]) <= 18684))))));
                        var_22 += 255;
                    }
                }
            }
            arr_14 [5] [i_0] [i_1 + 1] = -256;
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    {
                        arr_19 [i_0] [i_1 + 1] [i_4] [17] [17] [i_1 + 1] = ((((max((min(75549523, 6)), (-127 - 1)))) && (arr_13 [i_1 + 1] [i_1] [i_1 + 1] [i_1])));
                        arr_20 [i_0 - 2] [3] [i_0 - 2] [1] = -32100;
                    }
                }
            }
            var_23 = (max(var_23, -1));
            var_24 = (max(var_24, ((max((((arr_5 [i_1 + 1] [i_1 + 1] [i_1]) & (arr_5 [i_1 + 1] [13] [13]))), (arr_12 [i_0] [i_0 - 1] [i_1 + 1] [i_1]))))));
        }
        arr_21 [i_0] [11] = (((min((arr_17 [i_0] [i_0 + 1] [i_0] [i_0] [i_0 - 1] [8]), (arr_10 [i_0] [i_0] [i_0] [i_0])))) >> ((((arr_17 [i_0 + 2] [i_0 - 1] [i_0] [13] [i_0 - 2] [15]) == (arr_10 [i_0] [i_0] [i_0 - 1] [i_0])))));
    }
    #pragma endscop
}
