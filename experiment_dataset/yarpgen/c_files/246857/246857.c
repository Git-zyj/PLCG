/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = (+(((arr_0 [i_0]) + (max(0, (arr_1 [i_0]))))));
        arr_2 [i_0] = ((((max((min(-796931700, (arr_1 [i_0]))), (!1)))) ? (arr_1 [i_0]) : ((max((arr_0 [i_0]), (arr_0 [i_0]))))));
        var_15 = ((((min((arr_1 [i_0]), (arr_1 [i_0])))) || var_6));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_16 = (arr_5 [10] [i_1]);

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_17 = 0;
            var_18 = ((~((((((arr_3 [i_2]) ? (arr_5 [i_1 + 1] [i_2]) : 28462))) ? (arr_4 [4]) : ((((arr_3 [i_2]) || (arr_4 [i_1]))))))));
            var_19 = (((((31 % ((max(var_13, (arr_5 [i_1 + 1] [i_1]))))))) || (((-(arr_4 [i_1]))))));
            arr_9 [i_1] [i_2] = (arr_0 [i_2]);

            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                var_20 = (~1131714354);
                var_21 = ((((!((((arr_1 [i_2]) * (arr_5 [4] [4])))))) ? (((arr_6 [i_2] [i_2]) ? (max((arr_4 [i_1]), var_9)) : ((((arr_6 [i_2] [i_2 + 1]) | (arr_12 [i_1 + 1] [i_2 - 2] [i_3 + 2])))))) : 1));
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_22 = ((((min((arr_0 [i_6]), 0))) ? (((arr_17 [i_1] [i_7]) ? 1249442408 : -5406790342442758495)) : (arr_16 [i_7])));
                                arr_23 [i_7] [0] [i_4] [i_4] [7] [i_4] [i_1] = (((64856 ? (~var_1) : (((~(arr_0 [19])))))));
                                var_23 = (-(arr_13 [i_1 + 1] [i_1 + 1]));
                                arr_24 [1] [1] [1] [i_4] [i_5] [i_6] [1] |= (((((((arr_5 [i_1] [i_1]) >> (-14860 + 14888))) ^ (arr_7 [i_1] [i_1] [1])))) ? (~var_0) : (max(2046576233, 3306)));
                            }
                        }
                    }
                    var_24 = var_10;
                }
            }
        }
        var_25 = (var_12 ? (arr_13 [i_1] [i_1 + 1]) : (((((~(arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [10]))) > (arr_5 [i_1 + 1] [i_1 + 1])))));
        var_26 = (((arr_18 [i_1]) || ((13188894879829169688 || (arr_14 [i_1] [11])))));
    }
    var_27 |= (max(-var_1, 12042));
    var_28 = var_8;
    #pragma endscop
}
