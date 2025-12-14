/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46524
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_11, ((((var_0 || var_5) || var_0)))));
    var_18 = (min(68, 70));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_9 [i_0] [13] [i_2] [13] = (min(((((4554645431817513959 & 999154770259371895) ? var_1 : 65535))), (max(((min(var_9, (arr_8 [6] [6])))), (min(var_14, 281474976710655))))));
                    arr_10 [i_2] [i_2] [i_2] [i_0] = 448;
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    arr_14 [i_1] [i_3] = (17592186042368 * 28);
                    arr_15 [i_3] [i_1] [i_0] = 243913481;
                    arr_16 [i_1] = ((!((max(9223372036854775807, 65506)))));
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 12;i_5 += 1)
                    {
                        arr_23 [i_0] [i_4] [i_1] [0] [i_5 + 2] [i_5 + 1] = 571077088010469317;
                        arr_24 [i_4] [i_1] = ((var_8 ? (arr_7 [i_0]) : var_14));
                        arr_25 [4] [i_1] [i_1] [i_1] [i_1] [i_0] |= (127 <= 20846);
                        arr_26 [i_5] [i_4] [i_4] [i_0] = ((57 >= (((~(((arr_2 [5] [i_1]) * var_7)))))));
                    }
                    arr_27 [i_4] [1] [i_1] [i_4] = (((min((arr_18 [i_0] [i_4] [i_4]), (arr_18 [i_0] [i_1] [i_4])))) ? (min((min(var_3, 281474976710665)), 68)) : ((-(min(-17592186042344, -1)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 14;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                arr_35 [i_4] [i_6] [i_4] [i_1] [i_4] = (((((max(20846, 13786075507606154531)))) ? (min((arr_20 [i_4] [10] [i_4] [i_1] [i_1] [i_4]), ((max((-2147483647 - 1), 193))))) : (arr_4 [i_0] [i_0] [i_7])));
                                arr_36 [i_7] [i_6] [i_0] [i_1] [i_0] = 0;
                                arr_37 [i_0] [i_0] [i_0] [i_4] [i_0] = ((57768 ? ((var_0 ? 0 : (arr_28 [i_0] [i_0] [i_4] [10] [0] [i_6]))) : (1378852105 - 9223372036854775807)));
                                arr_38 [i_6] [i_6] [i_4] [i_6] [i_6] = (max((((!(2147483648 && 248)))), 57));
                            }
                        }
                    }
                }
                arr_39 [i_1] = ((-((min(187, 85)))));
            }
        }
    }
    #pragma endscop
}
