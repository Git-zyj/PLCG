/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((max((~var_1), (((!(-32767 - 1))))))) < (~var_12)));
    var_16 = (((((31 - var_5) - var_6)) - (var_3 * var_1)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (max(var_17, (((-(arr_3 [i_0]))))));
        arr_4 [i_0] [i_0] = -var_6;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_7 [i_1] = (((((min((arr_5 [i_1] [16]), var_6)))) << (var_10 - 14404066627398790400)));
        var_18 = (min((min((arr_5 [i_1] [i_1]), ((var_6 ? (arr_6 [i_1] [i_1]) : (arr_6 [i_1] [i_1]))))), ((((((~(-9223372036854775807 - 1)))) && 23)))));
        arr_8 [i_1] [i_1] = ((((((26 && (arr_6 [i_1] [i_1]))) ? (((arr_5 [i_1] [i_1]) & 4294967273)) : -850311358)) << ((((!(arr_5 [i_1] [i_1])))))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_19 = var_4;
        var_20 = (min(var_20, ((min(var_11, (((4294967273 < (arr_10 [i_2] [i_2])))))))));
        var_21 = ((26 ? ((4294967273 ? 26 : ((4294967273 ? 67108863 : (-9223372036854775807 - 1))))) : 4294967277));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 17;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 16;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_22 = (min(var_22, ((max((((arr_18 [i_3 - 1] [i_5] [i_5] [i_5] [i_5] [i_3]) ? (21924 - 7) : (min((arr_16 [i_2] [i_3] [i_4 + 2] [i_3]), (arr_13 [i_2]))))), (arr_17 [i_2] [i_4 - 1] [i_2] [i_4 - 1] [i_5] [i_5]))))));
                        arr_19 [i_2] [i_3] [i_4] [i_3] = arr_13 [i_5];
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                {
                    arr_30 [i_6] [i_7] [i_7] [i_6] = ((var_11 < (arr_25 [i_6 - 1])));
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 14;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            {
                                var_23 = ((0 == ((((arr_20 [i_9 - 3] [i_9 + 1]) ? 511 : var_7)))));
                                arr_36 [i_6 - 1] [i_6] [i_6] [i_6] [7] [i_6 - 1] = (((arr_34 [i_6 + 1] [1] [i_6 + 1] [i_9]) ? (arr_34 [9] [i_7] [i_6 - 1] [i_7]) : (arr_34 [i_9] [i_9] [i_6 - 1] [i_9])));
                                arr_37 [i_10] [i_9] [i_8] [i_7] [i_6] = ((arr_28 [7] [i_9 - 2] [i_10] [i_10]) | 46);
                            }
                        }
                    }
                }
            }
        }
        var_24 = (23 + var_3);
        arr_38 [i_6] [i_6] = (arr_32 [i_6] [i_6] [i_6] [i_6]);
        arr_39 [i_6] = ((-(arr_35 [i_6 + 1])));
        var_25 = (arr_5 [i_6 - 1] [i_6]);
    }
    #pragma endscop
}
