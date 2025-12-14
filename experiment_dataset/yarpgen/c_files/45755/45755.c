/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45755
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;
    var_21 = var_0;
    var_22 += (((~((52 ? var_2 : var_8)))));
    var_23 = (max(var_23, (((-7892140614473439138 ? 37 : 234)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (~30);
        var_24 = var_19;
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (min((((~(min(88, (arr_5 [i_1])))))), (((arr_6 [i_1] [i_1]) / (arr_6 [i_1] [i_1])))));

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_25 = (arr_9 [11] [11] [i_1]);
            arr_11 [i_1] [i_1] = ((!(!89)));
            /* LoopNest 3 */
            for (int i_3 = 4; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        {
                            arr_21 [i_5] [12] [i_5] [i_5] [i_5] [i_2] = (((((arr_15 [i_1]) % (-1 - 475636893))) | ((((((!(arr_10 [1])))) % var_7)))));
                            arr_22 [i_1] [9] [i_4] [i_1] [i_1] [i_1] [i_1] = (((((arr_14 [7] [1] [5] [i_4 - 2]) - (arr_17 [i_2] [i_3] [i_3] [i_4 - 2]))) - (((arr_17 [i_3] [i_3] [i_3] [i_4 - 2]) - 219))));
                            var_26 += (arr_16 [i_3] [i_4 - 2] [1] [i_5]);
                        }
                    }
                }
            }
        }
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 25;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 24;i_9 += 1)
                    {
                        {
                            arr_34 [i_9] [17] [i_7] [i_8] [i_8] [i_9 - 3] = (~255);
                            arr_35 [i_1] [i_1] [1] [i_7] [2] = arr_24 [i_6 + 2];
                            var_27 = ((~(arr_10 [i_1])));
                            var_28 = (((-255 ? var_8 : -1)));
                        }
                    }
                }
            }
            var_29 = ((((arr_32 [i_1] [i_6] [i_6] [i_6]) ? (((((-9223372036854775807 - 1) < (arr_27 [i_1]))))) : ((24532 ? (arr_25 [20]) : (arr_19 [i_1] [12] [i_1]))))) << (((arr_18 [i_1] [2] [i_1] [i_6 - 1]) ? 0 : (arr_33 [i_1] [i_6 + 1]))));
            var_30 = 255;
        }
        arr_36 [16] = 37;
    }
    for (int i_10 = 0; i_10 < 24;i_10 += 1)
    {
        var_31 = -5108;
        var_32 = ((((~((min((arr_26 [1] [i_10] [i_10]), 37)))))) ? (((-var_10 ? 26 : (arr_4 [i_10])))) : (arr_13 [i_10] [21] [i_10] [21]));
    }
    for (int i_11 = 1; i_11 < 17;i_11 += 1)
    {
        var_33 += (arr_33 [i_11] [2]);
        var_34 = (!255);
        var_35 = ((~(((arr_5 [i_11]) ^ var_4))));
    }
    #pragma endscop
}
