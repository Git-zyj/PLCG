/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20122
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_14 = (min((min(1390461524344773535, 1390461524344773535)), -1390461524344773535));

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_15 = (arr_1 [i_1] [i_0]);
            var_16 = ((~(~16790242889145419367)));
        }
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_17 = (((arr_0 [i_2]) ? (((((~(arr_0 [7]))) > (~var_2)))) : (((arr_9 [i_0] [i_0]) + 4272))));
            var_18 = ((+((((var_10 ? (arr_2 [i_2]) : (arr_9 [i_0] [i_2]))) | (((((arr_9 [i_2] [i_0]) < -29267))))))));
            arr_10 [i_2] = (((((~(((arr_3 [i_0]) ? 28968 : 4272))))) ? (((((arr_7 [i_2] [i_2] [i_0]) < 16790242889145419367)))) : ((var_2 ? (((arr_3 [12]) ? var_10 : var_0)) : (var_1 || 3200474786831822699)))));
        }

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_19 = (max(((((~(arr_4 [i_3]))) << (!1))), (((min((arr_4 [i_0]), (arr_12 [i_0]))) | (arr_5 [1])))));
            var_20 = ((-3415797144969280043 ? (arr_11 [i_3] [15]) : (min((61277 & 5918438752067937292), 242))));
            arr_13 [i_0] [i_0] = (max((arr_5 [i_0]), (((var_0 >= (arr_5 [i_0]))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    {
                        var_21 = (((arr_17 [i_5] [i_5] [i_5] [i_5]) <= (arr_20 [i_6] [i_5] [1] [i_4] [i_0])));
                        arr_23 [i_5] = (((arr_4 [i_4]) >= (arr_14 [i_5 + 3] [i_5])));
                        var_22 = (arr_22 [4] [1] [i_5 + 1] [i_0]);

                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            arr_26 [10] [i_5] [i_5] [i_5 + 1] [12] [i_7] [i_5] = 1390461524344773534;
                            arr_27 [i_4] [i_5] [i_6] [i_5] = ((((var_6 + (arr_12 [i_7]))) & (arr_19 [i_5 + 2] [i_5 - 1] [i_5] [i_5 + 2])));
                        }
                        var_23 = (1 > 2316693179);
                    }
                }
            }
            var_24 = (arr_19 [i_0] [i_0] [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            arr_31 [i_8] [i_8] [i_0] = (arr_3 [i_0]);
            arr_32 [i_0] [i_0] [i_0] = var_5;
            var_25 = ((+((4259 >> (((arr_21 [i_0] [i_8] [i_8]) + 23))))));
        }
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            var_26 = (arr_3 [i_0]);
            arr_35 [i_9] = var_4;
        }
    }
    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
    {
        var_27 = (!3200474786831822697);
        arr_39 [i_10] = (((min((~var_8), (arr_19 [2] [2] [1] [i_10])))) ? ((((((arr_25 [i_10] [i_10] [i_10] [i_10] [i_10]) ? 0 : (arr_33 [i_10] [i_10])))) % (((arr_19 [i_10] [i_10] [i_10] [i_10]) % 3097805109208173046)))) : var_1);
        var_28 = (min(2275590231931943791, (((!(arr_15 [i_10] [i_10]))))));
    }
    #pragma endscop
}
