/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (min(var_13, ((((-(arr_0 [i_0])))))));

        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] [i_1] = (((((1 ? 142 : 9818998284861976659))) ? (((((min(15228667266385296556, (-9223372036854775807 - 1)))) ? var_1 : (arr_1 [i_1 - 1])))) : (((182 ? 18446744073709551598 : 3890461119862091379)))));
            var_14 = -1;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_11 [1] [i_2] |= var_0;

                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            arr_14 [i_2] [i_1 + 1] [i_2] = var_1;
                            var_15 = (max(var_15, 18446744073709551612));
                        }
                        for (int i_5 = 1; i_5 < 21;i_5 += 1)
                        {
                            var_16 = (!1905711960988524785);
                            arr_18 [i_5] [i_3] [i_2] [i_2] [3] = var_6;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_21 [i_0] [15] [i_0] [i_0] [i_0] [i_3] [i_0] = (max((((!(arr_12 [i_0] [i_1 - 1] [i_2] [i_3] [i_6])))), (((arr_12 [17] [i_1 - 1] [17] [i_0] [17]) ? (arr_12 [2] [i_1 + 1] [15] [i_1] [i_6]) : 210))));
                            var_17 = (((((var_7 ? (arr_6 [i_1 - 1] [i_1 - 1]) : 126))) ? -524287 : (((arr_6 [i_1 + 1] [i_1 + 1]) ? (arr_6 [i_1 + 1] [i_1 - 1]) : (arr_6 [i_1 - 1] [i_1 + 1])))));
                            var_18 = var_5;
                            var_19 = (min(2669538144, 2806145829));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_20 = (arr_23 [i_0] [i_1] [18] [i_2] [i_3] [0]);
                            arr_25 [i_0] |= (((arr_24 [i_0] [1] [i_3]) & ((-(1667162734430429704 & 1)))));
                            var_21 = (min(var_21, (((((min(var_2, -15))) ? -1 : (((arr_8 [i_0] [i_1 - 1] [i_2] [i_1 - 1] [i_2]) ? (1 - 2) : (max(110, 0)))))))));
                        }
                        var_22 |= (max(((-63 ? -4276 : 253)), var_5));
                    }
                }
            }
            var_23 |= (max(2919425470, 1));
            var_24 = var_3;
        }
        var_25 |= var_9;
    }
    var_26 = 1;
    var_27 = -var_2;
    var_28 |= 132;
    var_29 = (min((min((-16231 && 1), ((249 ? var_10 : var_7)))), 211));
    #pragma endscop
}
