/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max((((((((-207206829 + 2147483647) >> (749437486 - 749437481)))) ? (28544 >= 749437486) : var_8))), (max(var_2, (((var_0 ? var_3 : var_12)))))));
    var_14 = ((-var_8 ? var_5 : ((var_7 ? 127 : var_10))));

    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            var_15 = (min((arr_1 [i_0]), (arr_0 [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        var_16 = (max(2694546643, -54));
                        var_17 = (min((!3598278077), (max(0, ((749437486 ? 2031666540 : 0))))));
                        var_18 ^= ((max(((~(arr_6 [i_0] [8] [i_3 + 2])), (!var_9)))));
                    }
                }
            }
        }
        var_19 = (((2147483645 / -12355) ? 3646250831 : (3646250831 > 577579873)));
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_20 = ((-(((((203 ? var_9 : (arr_11 [15])))) ? ((max(2543637241, -5))) : ((~(arr_9 [i_4])))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    var_21 = (min(-64, (((((arr_11 [i_6]) / var_3)) >> (((31299 / 66) - 445))))));

                    for (int i_7 = 0; i_7 < 16;i_7 += 1)
                    {
                        var_22 = var_9;
                        var_23 += (!var_1);
                        var_24 = (max(var_24, (((~(~-8))))));

                        for (int i_8 = 0; i_8 < 16;i_8 += 1)
                        {
                            arr_24 [i_6] [i_6] [i_4] [i_6] [13] [13] [i_8] = ((-12017618123304774844 ? var_8 : (arr_22 [i_5] [3] [i_6] [i_5] [i_4])));
                            arr_25 [i_4] [i_5] [i_5] [6] [6] [i_5] = ((114 >> (23610 - 23586)));
                            arr_26 [i_6] [i_4] [13] [i_6] [i_6] [i_6] = (max(var_0, (arr_20 [i_4] [i_5] [i_5] [i_5] [i_7] [i_8])));
                            arr_27 [i_4] [i_5] [i_6] [i_7] [3] [i_5] = ((!((-23625 || ((min(366440373, 0)))))));
                        }
                        var_25 |= (arr_21 [i_5]);
                    }
                    var_26 = (749437493 ? (var_5 == 28034) : ((~((var_8 ? (arr_12 [i_4]) : 47545)))));

                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_27 += ((~((31488 ? (((arr_20 [i_4] [i_5] [i_5] [i_6] [i_6] [i_9]) ? (arr_14 [i_5]) : (arr_23 [i_4] [i_4] [i_6] [i_4]))) : (arr_15 [i_9])))));
                        arr_30 [i_4] [i_4] [i_6] [9] = (253258324 ? (min(7556691896478911888, (((-(arr_20 [i_5] [i_5] [i_6] [i_6] [i_9] [i_5])))))) : ((min(var_6, (max(var_5, (arr_17 [i_4])))))));
                        arr_31 [i_4] [i_6] [i_6] [i_9] [i_5] [6] = ((!(((arr_22 [i_4] [i_5] [i_9] [i_9] [i_9]) != (arr_22 [i_4] [i_5] [i_6] [i_9] [9])))));
                    }
                }
            }
        }
        var_28 = (min(var_28, ((((((105 ? 16892 : 188))) ? (((0 ? 648716462 : 1455475321))) : 12770413488966603747)))));
    }
    #pragma endscop
}
