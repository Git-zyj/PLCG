/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_2] [i_2] [i_2] = var_12;
                    var_15 = ((arr_3 [i_0] [i_1 + 1]) || 1456138155);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = (max(var_16, ((((((-(arr_1 [i_2])))) ? (max((((-2147483647 - 1) ? 8 : 2838829141)), 1)) : (min(-1456138155, (0 / 1303))))))));
                                arr_14 [i_1] [8] [i_2] [2] [i_2] [i_3] [18] = (min((arr_7 [i_2] [i_2]), (((17457076305220194916 + (arr_2 [i_3]))))));
                                var_17 = ((((~var_10) | (((-127 - 1) ? 117 : 8421065824664027831)))));
                                arr_15 [i_2] = ((max((min(var_4, -2035269559)), (arr_10 [i_1] [i_2]))));
                                var_18 = ((-1304 ? (((!68) ? (arr_11 [i_1 - 1] [i_1 + 1] [16] [i_1 + 1] [i_4 + 1]) : (arr_3 [i_0] [i_0]))) : (((min((arr_4 [i_0] [i_0] [i_0]), (arr_13 [i_0] [13] [1] [i_3] [i_4])))))));
                            }
                        }
                    }
                    var_19 = ((((1456138155 ? 15091629995013741782 : 2147483647)) / (arr_10 [i_0] [i_0])));
                }
            }
        }
    }

    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        var_20 ^= ((100 ? -96 : (((~((min(61944, 149))))))));

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            var_21 -= (((arr_11 [i_5] [i_5] [9] [i_6] [i_6]) << ((1 ? ((((arr_19 [i_6] [i_5]) & (arr_8 [i_5] [i_6])))) : (arr_17 [i_6] [i_5])))));
            arr_23 [i_5] [i_6] = (((~var_11) ? (((~41015) ? 84 : (arr_1 [i_5]))) : 20403));
        }

        for (int i_7 = 1; i_7 < 9;i_7 += 1)
        {
            arr_27 [0] [i_7 + 1] = (arr_26 [i_5] [i_5] [i_5]);
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                for (int i_9 = 4; i_9 < 7;i_9 += 1)
                {
                    {
                        var_22 = (min(var_22, (((((min(0, (max(192, (arr_1 [i_9 + 1])))))) != 0)))));
                        arr_35 [i_9] [i_8] [i_8] [i_5] = (max((~var_0), (((arr_34 [i_5] [i_5]) / (min(229376, 1879048192))))));
                        var_23 &= (((((max(var_2, (arr_6 [i_5] [i_5] [i_5])))) ? (arr_26 [i_5] [i_7] [i_9 + 1]) : ((-19747 ? (arr_8 [i_5] [i_8]) : (arr_29 [i_5] [i_5] [i_8] [i_9]))))));
                        var_24 &= (~3631);
                    }
                }
            }
            arr_36 [i_7] = (((((+(((arr_7 [2] [i_5]) + var_11))))) ? ((min(((12813 ? (arr_25 [1] [i_7]) : 107)), -30796))) : 31353141833553925));
            var_25 -= ((var_11 + ((((-6373552265299964857 ? -26084 : 18662))))));
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_26 = (!10911);
        arr_39 [i_10] [i_10] = var_4;
        var_27 = ((15360 ? (--1) : ((~(max(var_7, var_2))))));
    }
    #pragma endscop
}
