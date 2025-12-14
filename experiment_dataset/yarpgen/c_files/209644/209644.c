/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209644
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_9;
    var_15 = var_1;
    var_16 = min(515891015, var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_17 ^= arr_1 [i_0] [i_1];
                var_18 += max(var_2, (((var_9 < (((!(arr_2 [i_0]))))))));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_19 = (min(var_19, (max(515891015, (~515891024)))));
                                var_20 = ((~14) * ((((arr_0 [i_0]) < (arr_0 [i_0])))));
                                var_21 -= (-1 < var_7);
                                var_22 = (min(var_22, (((((-(((arr_6 [12] [i_3] [11]) ? var_8 : 4294967285)))) % (((((max((arr_3 [i_0] [13] [13]), 65522))) ? 515891015 : ((max((arr_9 [i_2] [i_4]), var_0)))))))))));
                            }
                        }
                    }
                    var_23 = arr_8 [i_0] [i_0] [i_0] [i_0];

                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        arr_13 [i_5] [i_2] = var_13;
                        var_24 = (((((((arr_7 [i_0] [i_0] [i_0] [0]) - (arr_5 [i_0] [i_2] [i_0])))) ? (((arr_11 [9] [2] [i_5] [i_5] [i_2] [i_5]) ? 10 : 4294967286)) : ((max(2147483647, 23))))));
                        var_25 = (arr_7 [i_5] [8] [i_1] [i_0]);
                    }
                }
                for (int i_6 = 3; i_6 < 12;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        var_26 = (-((-(arr_17 [i_0] [i_1] [i_6] [i_7]))));
                        var_27 = (max(((((3286839542 ? -515891015 : 35517)) < (((arr_4 [9] [9]) ? (arr_6 [i_0] [i_1] [12]) : (arr_9 [i_6] [i_7]))))), (5 < -242397759)));
                        var_28 = (min(((((arr_9 [i_6 + 2] [i_6]) < (!var_9)))), (((((~(arr_15 [9] [i_1] [i_7])))) ^ var_8))));
                    }
                    arr_19 [4] |= ((4294967277 * (min(4294967290, (548030782 < 358905321)))));
                    var_29 = ((-548030762 % (max(153251824, 515891027))));
                    var_30 += (((((arr_3 [i_6 + 1] [i_6 + 2] [i_0]) % var_2)) < ((var_3 % (arr_3 [i_6 - 3] [i_6 - 2] [i_6 + 2])))));
                }
            }
        }
    }
    #pragma endscop
}
