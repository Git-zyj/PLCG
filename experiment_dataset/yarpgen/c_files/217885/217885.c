/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_0 ? ((((-82 ? var_9 : 21154)))) : ((((min(var_0, 16))) - var_3))));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 10;i_3 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_13 = ((1419801812 ? (arr_14 [i_3] [i_3] [i_3 + 1] [i_4] [i_4] [i_4]) : var_11));
                            var_14 = ((18197592264037037522 ^ (arr_7 [i_3] [i_3])));
                        }
                        for (int i_5 = 3; i_5 < 10;i_5 += 1)
                        {
                            var_15 = (((44381 ? (((8191 / (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5])))) : (arr_17 [10] [i_3 - 1] [1] [i_0 - 1] [i_0]))) >= (arr_2 [i_0]));
                            arr_19 [6] [i_0] [i_0] [i_3 - 3] [2] = (~((142 ? 27766 : var_6)));
                        }
                        var_16 *= ((((((arr_2 [i_2]) <= (arr_2 [i_2])))) & ((max((arr_2 [i_3]), (arr_2 [i_3]))))));
                    }
                }
            }
        }
        var_17 = (max((arr_16 [i_0 - 1] [i_0] [i_0 - 1]), (max(-5353965202786756395, (arr_15 [1] [i_0] [i_0 + 1] [i_0] [i_0])))));
    }
    for (int i_6 = 1; i_6 < 21;i_6 += 1)
    {
        var_18 = ((((((((7 ? var_1 : var_6))) ? var_5 : (arr_20 [i_6 - 1])))) ? ((((1 || (arr_20 [i_6]))) ? (98 > 57344) : (arr_21 [i_6 + 1]))) : ((((((arr_21 [i_6]) > (arr_21 [i_6])))) * ((max((arr_21 [i_6 + 1]), 37770)))))));
        var_19 = (min(var_19, ((((((arr_21 [i_6 + 1]) >> (((arr_20 [i_6 - 1]) - 2078703881)))) / ((47290863240615604 ? (arr_21 [i_6 - 1]) : -7)))))));
        arr_22 [10] = var_10;
        var_20 ^= (((min((arr_21 [i_6 - 1]), 1))));
    }
    for (int i_7 = 2; i_7 < 21;i_7 += 1)
    {
        var_21 = (((max((arr_23 [i_7 + 3]), (arr_23 [i_7 + 2]))) | (((var_2 ? (5705573306639584385 || var_10) : ((max(248, -7))))))));
        arr_27 [i_7 + 1] = (-(((((var_3 && (arr_26 [i_7])))) - var_0)));
        arr_28 [i_7] = ((-(min(7, (arr_23 [i_7 + 3])))));
    }
    #pragma endscop
}
