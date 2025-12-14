/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194295
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (201 - 229);
    var_11 = var_9;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_12 = -223;
        arr_2 [i_0] = (((arr_1 [i_0 - 1] [i_0 + 2]) / var_8));
        var_13 = (min(var_13, ((((arr_1 [i_0 - 1] [i_0 - 1]) + (arr_0 [6]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_14 = ((arr_5 [i_1 + 1] [i_1 + 1]) ? (arr_5 [i_1 + 1] [i_1 - 1]) : (arr_5 [i_1 - 1] [i_1 + 1]));
        var_15 *= ((var_6 || (arr_5 [i_1 - 1] [i_1 - 1])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        arr_8 [i_2] = ((-27 ? (!6206) : var_7));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_16 ^= (((((min(-121, var_3)))) << ((((var_2 / (140703128616960 != var_8))) - 15339173296647331587))));
                    var_17 = (max((max((var_7 / var_8), (arr_6 [i_2]))), ((((arr_9 [i_4] [i_3] [i_4]) ? (arr_9 [i_2] [i_3] [i_4]) : (arr_9 [i_4] [i_2] [i_2]))))));

                    for (int i_5 = 3; i_5 < 20;i_5 += 1)
                    {
                        var_18 = (-6630354396790097621 - 35);
                        var_19 = (min(var_19, var_1));
                        var_20 = (min(var_20, (arr_9 [i_3] [i_4] [i_4])));
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_21 = (min((max((arr_16 [i_2] [i_3] [i_4] [i_6]), var_1)), (((arr_16 [13] [i_3] [i_4] [7]) + (arr_16 [i_2] [i_3] [i_4] [i_4])))));
                        var_22 = ((var_5 != (max((arr_16 [i_4] [i_4] [i_2] [i_2]), 2197140423))));
                    }
                }
            }
        }

        for (int i_7 = 3; i_7 < 21;i_7 += 1)
        {
            var_23 = -62;
            var_24 = ((-1893824598779733487 >= (((1 ? 11063 : ((140703128616939 ? 0 : 6206)))))));
        }
    }
    for (int i_8 = 0; i_8 < 14;i_8 += 1)
    {
        var_25 = (max((min(-123, 24078)), 127));
        arr_25 [i_8] = (max((((var_4 % (arr_22 [i_8])))), (max(var_3, var_0))));
        var_26 = ((!(204 != var_8)));
        var_27 = 31;
    }
    #pragma endscop
}
