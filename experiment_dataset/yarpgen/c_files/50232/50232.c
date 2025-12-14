/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= 122;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 += ((((max(108, (arr_1 [i_0])))) || (((32766 ? (var_7 / var_3) : 1)))));
        var_12 = ((-3959817019230782165 ? (max(((min(1, (arr_1 [i_0])))), ((var_7 ? 6113883665692692408 : 2081404853)))) : (((+(((arr_1 [i_0]) / 1)))))));
        var_13 = ((((arr_1 [i_0]) ? (max(12332860408016859220, var_6)) : 1)));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = -24790;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 16;i_4 += 1)
                        {
                            {
                                var_15 = (min(var_15, (arr_6 [i_3])));
                                var_16 = ((29944 ? ((max(79, (arr_11 [i_2] [i_4 - 1] [i_4] [i_4] [i_4 - 3])))) : 103901358808142724));
                            }
                        }
                    }
                    var_17 *= (max((((arr_5 [i_1 - 1] [i_2 + 2] [i_2 + 2]) - var_0)), (arr_11 [i_0] [i_0] [i_1 + 1] [i_1] [i_2 + 2])));
                }
            }
        }

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            arr_14 [i_0] [i_0] = var_7;
            var_18 &= var_0;
            var_19 = (min(((min(((var_8 ? 23124 : var_2)), ((((arr_8 [i_0] [i_0] [i_0] [i_0]) >= (arr_4 [i_0] [i_0] [i_0] [i_5]))))))), 7541494409479266971));
            var_20 = (min(var_20, (((+((min((arr_12 [i_0] [i_0] [i_0]), (max(1, 255))))))))));
            var_21 = 2855265445;
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        var_22 *= ((arr_16 [i_6]) ? (arr_17 [i_6]) : 7541494409479266947);
        var_23 = (min(var_23, (((((((arr_15 [i_6]) ? (arr_17 [i_6]) : (arr_15 [i_6])))) ? (arr_15 [i_6]) : ((8967922172309439649 >> (var_1 - 3555276610))))))));
        var_24 = (min(var_24, (arr_16 [i_6])));
    }
    var_25 = var_1;
    /* LoopNest 3 */
    for (int i_7 = 3; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 17;i_9 += 1)
            {
                {
                    arr_26 [i_7] [i_8] [i_8] [i_9] = 3678445054755126088;
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 17;i_11 += 1)
                        {
                            {
                                arr_32 [i_7] [i_7] [i_7] [i_11] = var_8;
                                var_26 += ((!((((arr_16 [i_7]) ? (((-7 ? 3133 : 1))) : ((var_4 ? (arr_11 [i_7] [i_8] [i_7] [i_10] [i_11]) : (arr_24 [i_8] [i_11]))))))));
                                var_27 *= (((((((var_5 ? (arr_3 [i_7 + 1]) : 58395))) ? (min(var_1, 4193792)) : ((min(1, var_1))))) * ((max((arr_1 [i_7 + 1]), ((2213562450 ? (arr_1 [i_8]) : 159)))))));
                            }
                        }
                    }
                    arr_33 [i_7 + 1] [i_8] [i_8] [i_8] = ((((25998 + (arr_10 [i_7 - 3] [i_7 + 1] [i_7 - 3]))) != ((max((arr_27 [i_7 - 3] [i_7 - 3] [i_8] [i_8]), (var_4 > var_5))))));
                }
            }
        }
    }
    #pragma endscop
}
