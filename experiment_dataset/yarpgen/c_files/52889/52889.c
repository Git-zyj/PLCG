/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 = ((15830327168146518853 ? -29499 : 15218770712884392639));
    var_21 = var_17;
    var_22 = ((-(((!(~1))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        var_23 = (--124);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_1] = (-53453 + -1545627930);
                    arr_9 [i_2] [i_1] [i_1] [i_0] = (arr_1 [i_1 - 1]);
                    var_24 = (arr_5 [i_2] [i_1] [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_25 = (((((var_12 ? 12065 : var_5))) == (arr_10 [i_3] [i_2] [i_0] [i_0])));
                                arr_16 [i_1] [i_1] = ((-125 == (arr_6 [i_0 - 2] [i_0 + 1] [i_1 - 1] [i_1 - 1])));
                                var_26 *= (~var_5);
                            }
                        }
                    }
                }
            }
        }
        var_27 = 20965;
        var_28 = ((-916959361 ? (arr_12 [i_0] [i_0] [i_0 - 1]) : 12067));
        arr_17 [14] = ((~((-1840467170 ? 19308 : 4540))));
    }
    for (int i_5 = 3; i_5 < 9;i_5 += 1)
    {
        var_29 = (min(var_29, (((1 <= ((77 ? 23529 : (min(754033571, 125)))))))));
        var_30 ^= (max(((-(((arr_19 [i_5]) - 1)))), (var_0 - var_14)));
        var_31 ^= (min(((var_17 ? (arr_15 [i_5] [i_5 - 3] [i_5 - 3] [i_5] [i_5] [i_5]) : var_11)), ((~(arr_15 [i_5] [i_5 - 3] [i_5 - 3] [i_5 - 2] [i_5] [i_5])))));
    }
    for (int i_6 = 3; i_6 < 12;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 0; i_7 < 14;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 14;i_8 += 1)
            {
                for (int i_9 = 3; i_9 < 13;i_9 += 1)
                {
                    {
                        arr_29 [9] [i_8] [i_9] = ((((-1545627930 - ((1204973213 ? 60995 : 50640)))) < (((arr_11 [i_6 + 2] [i_6 - 3] [9] [19] [i_9] [i_9 + 1]) ? 1 : 27179))));
                        arr_30 [i_9] [i_8] = (((((-((var_7 ? var_3 : var_15))))) ? ((+(((arr_4 [11] [i_7]) ? var_8 : 1)))) : ((-(var_1 > var_15)))));
                        arr_31 [i_6 - 1] [i_6] [i_6] [i_7] [8] [i_9] = ((-152210966 ? -1 : ((var_15 << (2635239532295194807 - 2635239532295194807)))));
                    }
                }
            }
        }
        var_32 = ((-(9 - 1)));
    }
    #pragma endscop
}
