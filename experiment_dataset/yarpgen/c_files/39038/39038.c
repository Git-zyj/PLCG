/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((var_13 > (var_8 != var_2))) ? (var_8 != var_14) : ((((min(7413787150757998224, 16290652106072577793))) ? (var_12 >= var_7) : 10823812451657896674))));
    var_16 = var_14;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_17 = -20095;
        var_18 += ((((arr_2 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0 + 2]))) | (arr_0 [i_0]));
        arr_3 [i_0] [i_0] = ((((((arr_0 [i_0]) < (arr_1 [5])))) * ((-16722 ? (arr_2 [i_0]) : 16721))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 3; i_2 < 12;i_2 += 1)
        {
            arr_9 [i_1] [i_2] [i_2] = var_13;
            var_19 = (((min((((!(arr_6 [0] [0])))), ((39 ? (arr_5 [i_1 + 1]) : 15234591528033604096)))) * (((((arr_4 [i_1 + 1]) < ((15234591528033604096 ? (arr_5 [i_1 + 1]) : (arr_7 [i_2 - 3] [11])))))))));
            var_20 = min(var_0, ((min((arr_4 [1]), var_5))));
            var_21 -= ((((min((((arr_6 [3] [i_2]) ? var_3 : (arr_7 [i_1] [i_2]))), (((arr_7 [i_1 + 1] [i_2]) ? var_10 : (arr_4 [i_2])))))) ? (arr_4 [i_1 - 2]) : var_9));
        }
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            arr_12 [i_1] [i_3] [i_3] = (min(2819257346, 3212152545675947520));
            var_22 = (((((var_11 ? (arr_4 [i_1 - 1]) : (arr_4 [i_1 - 1])))) ? (arr_4 [i_1 + 1]) : ((min((arr_4 [i_1 - 2]), (arr_4 [i_1 - 1]))))));
        }
        for (int i_4 = 3; i_4 < 11;i_4 += 1)
        {
            arr_16 [i_4] [i_1] [i_1] = var_3;
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        arr_23 [3] = (((((arr_22 [i_6] [i_6] [i_1] [i_5] [i_4] [i_1]) ? (arr_19 [i_1] [i_4 + 2] [i_5] [i_6]) : (arr_7 [i_5] [i_4 - 3])))));

                        for (int i_7 = 0; i_7 < 13;i_7 += 1)
                        {
                            var_23 -= ((145366477 ? (arr_22 [i_1] [1] [0] [i_6] [i_7] [7]) : ((997674062 << ((((-15164 ? -15164 : 4149600818)) - 4294952131))))));
                            var_24 = -15164;
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_25 = (max(var_25, (((4149600818 ? 255 : 62548)))));
                            arr_28 [i_1] [i_1] [i_5] [i_4 - 1] [i_8] [i_4 + 1] = -80;
                            var_26 = ((((((((arr_27 [i_1 - 2] [i_4] [i_5] [i_6] [2] [i_8]) ? var_14 : 2147483647))) || ((min(15164, var_11))))) && (~-58)));
                            arr_29 [i_8] [i_5] [i_5] [i_4 - 2] [i_1 - 1] = (min(var_8, ((((((arr_26 [i_8] [i_6] [i_5] [10] [i_1 - 1] [i_1]) ? var_5 : (arr_19 [i_1] [i_4 - 2] [i_1] [i_6])))) ? (min(1, (arr_19 [i_1] [i_4] [i_5] [i_6]))) : (arr_7 [i_4] [i_4 - 1])))));
                            var_27 = (max(var_5, (min((min(var_9, (arr_19 [i_1 - 2] [i_1 - 2] [7] [i_6]))), ((((arr_26 [1] [1] [i_5] [i_5] [i_5] [i_5]) < (arr_20 [i_1] [i_1] [i_6] [i_1]))))))));
                        }
                        var_28 += ((~(arr_27 [8] [i_4] [8] [i_4] [i_6] [i_4])));

                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            var_29 = 145366477;
                            arr_34 [i_1 - 2] [i_4] [i_5 + 2] [i_6] [i_9] = ((~((-58 ? 1 : (arr_17 [7])))));
                            arr_35 [i_1] [i_4] [i_1] [i_4] [i_4] = (((var_6 < 1) < (arr_32 [i_1 + 1] [i_4 - 2] [i_5] [i_6] [i_1 + 1])));
                        }
                        for (int i_10 = 3; i_10 < 12;i_10 += 1)
                        {
                            arr_38 [i_1] [i_1 + 1] [i_5 - 1] [i_10] [i_1] = (((arr_5 [i_1]) != ((max((arr_36 [i_10] [10] [i_10] [i_5 - 1] [i_1 - 1]), 58)))));
                            var_30 = (4149600818 != 15164);
                        }
                    }
                }
            }
        }
        arr_39 [i_1] = var_5;
    }
    #pragma endscop
}
