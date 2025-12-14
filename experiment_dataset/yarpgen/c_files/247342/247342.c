/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247342
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (~2214164799);
    var_15 += ((max((((1195572403577835654 ? var_9 : 61)), var_1))));
    var_16 -= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_17 = var_5;
                        var_18 = (arr_9 [i_3 + 1] [17] [17] [i_0] [14] [i_0]);
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {

                        for (int i_5 = 4; i_5 < 19;i_5 += 1)
                        {
                            var_19 |= ((((arr_7 [i_0] [i_2] [i_4] [i_5]) ? var_8 : var_13)));
                            arr_14 [i_4] = ((444610104 ? -6536988604075720533 : 53348));
                            var_20 ^= ((16384 && (arr_8 [i_1 - 1])));
                        }
                        var_21 ^= var_10;
                        var_22 = var_13;
                        var_23 = (min(var_23, ((3850357191 ? var_3 : 1918203974))));
                        var_24 = ((!23) << (3850357191 / 2006250780));
                    }
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_19 [i_0] [i_1 - 2] [17] [i_6] = 3850357191;
                        var_25 = ((-(arr_10 [i_6] [i_6] [6] [1] [19] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_26 = (arr_1 [i_0]);
                        var_27 = (min(var_27, 1755999459));
                    }
                    arr_22 [i_0] [i_0] [i_0] = var_4;
                    arr_23 [i_1] [i_2] = (arr_1 [i_1]);
                    var_28 += (arr_12 [i_1] [i_1] [16] [i_1] [7] [i_1] [i_1 - 1]);
                }
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    var_29 = (((((-(arr_11 [4] [5] [i_8] [7])))) - 3850357187));
                    var_30 |= ((444610084 ? 2046 : 2006250790));
                    var_31 = 1918203959;
                }
                for (int i_9 = 1; i_9 < 19;i_9 += 1)
                {
                    var_32 &= (((((+(((arr_16 [i_0] [i_0] [i_9 - 1] [i_9] [i_1]) ? (arr_12 [15] [i_1 - 1] [i_9] [i_1] [i_1 - 1] [i_1] [i_0]) : 3850357199))))) ? (((((65535 ? 85 : 3850357198))) | (44394 ^ var_1))) : (((((arr_13 [5] [i_1 - 4] [7] [i_9] [5]) || (((var_1 ? 5 : (arr_2 [i_0] [18]))))))))));
                    var_33 |= (arr_27 [10] [i_1] [i_9]);
                    var_34 = (((((((max(2139095040, 3789857130949002914))) ? (((48106 | (arr_3 [i_0] [i_1 - 4])))) : (min(4294967291, (arr_25 [i_0])))))) ? ((max(var_4, ((2288716515 << (3850357217 - 3850357204)))))) : ((13522778590575209386 & (arr_28 [i_1 - 1] [i_1 - 4])))));
                    var_35 = (max(64120, (15044008304439698777 | 18446744073709551615)));
                }
                arr_32 [i_0] [15] [3] = ((max(58, 19557)));
                var_36 = (min(var_36, 165));
                var_37 = ((((-15065 ? 8 : var_8))));
            }
        }
    }
    var_38 = 42;
    #pragma endscop
}
