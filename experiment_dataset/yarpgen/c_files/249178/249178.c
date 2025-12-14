/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-107 ? var_9 : ((2009598314 ? 574 : var_10))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_14 = ((!(-127 - 1)));
        arr_3 [i_0] = ((--65535) ? ((-51 ? (arr_1 [i_0 - 1]) : var_4)) : -var_10);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_1] [i_1] = (~4666458079892150227);
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_3] [i_1] = 32751;
                                arr_15 [i_4] [i_3] [i_1] [i_1] [i_0 - 2] = (((~274877906943) / (~1073741760)));
                                var_15 = (max(var_15, (((((min(-274877906938, 15561945925411464013))) ? (arr_9 [i_0 - 1] [i_0] [i_0 - 1] [i_3] [i_3]) : ((var_6 ? (arr_7 [i_4] [i_3] [i_2 - 1]) : var_5)))))));
                                arr_16 [i_0] [i_0] [i_2] [i_3 + 1] [i_3] [4] [i_2] = (13835058055282163712 ? (((!(arr_7 [i_2 + 1] [i_2 + 1] [i_2])))) : (~-1));
                                arr_17 [i_1] [i_1] [4] [i_0] [4] = (~var_9);
                            }
                        }
                    }
                    var_16 = 111;

                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        var_17 = ((+(((!9) * (arr_0 [i_0 - 1])))));
                        var_18 = (max(var_18, 13835058055282163712));
                        var_19 = var_11;
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            {
                                arr_26 [i_7] [i_0] [i_0] = ((+(max((arr_12 [i_2 + 1]), (arr_12 [i_1])))));
                                arr_27 [0] [i_1] [7] [10] [i_1] [10] [i_1] = (min((((((2289955176 ? -2104212298713314894 : 11418867205273785727)) == 165))), ((var_1 * (((!(arr_21 [i_0] [i_1] [i_2] [5] [6]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
