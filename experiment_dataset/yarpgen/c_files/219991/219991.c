/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_13 = (max(var_4, (((((!(arr_3 [i_0]))) || 1862)))));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_14 = ((((((var_0 ? var_0 : (arr_1 [i_0] [i_0])))) ? (((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : var_6)) : (arr_3 [i_0 + 1]))));
            var_15 *= ((((((max(var_5, -6170))) ? (arr_0 [i_0 + 1] [i_1]) : var_3)) < var_6));
            var_16 = 17192;
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        {
                            var_17 = (arr_10 [i_0] [i_0] [i_0 + 1]);
                            var_18 *= (!(!10023684337533903029));
                            var_19 = (5961205887508007625 ? (((min(12071, 63680)))) : ((1 ? 9044 : 7151994428899238900)));
                        }
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            var_20 = ((arr_12 [i_0] [i_5] [i_0 + 1] [i_0] [6]) ? 14467 : (min((arr_13 [i_0] [i_0] [i_0 + 1] [i_0]), (arr_14 [i_0] [i_5] [i_0 + 1] [i_0 + 1] [i_0]))));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                var_21 = (((arr_1 [i_0 + 1] [i_0 + 1]) ? (arr_1 [i_0 + 1] [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0 + 1])));
                var_22 = (((arr_0 [i_0 + 1] [i_0 + 1]) && var_12));
                var_23 = (min(var_23, ((((!var_5) ? (!var_12) : (arr_12 [i_0] [i_5] [i_0 + 1] [i_0] [i_6]))))));
            }
        }
        for (int i_7 = 0; i_7 < 16;i_7 += 1) /* same iter space */
        {
            var_24 = ((27072 ? (min((min(17494391414963315980, -1289795576)), 52730)) : (~-18628)));
            arr_24 [i_0] = (min(38464, ((max((arr_5 [i_0 + 1]), (arr_13 [i_0] [i_0 + 1] [i_0 + 1] [i_0]))))));
            arr_25 [i_0] [i_0] = (arr_5 [i_0]);
        }
        for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
        {
            var_25 |= (arr_19 [i_0]);
            var_26 = ((((max(var_7, var_5))) ? (max(-7271050499164691263, (max(70, (arr_11 [i_0] [i_0] [i_0] [i_0]))))) : var_10));
        }
    }
    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {
        var_27 = (min(((((!17494391414963315980) || ((max(var_5, (arr_1 [i_9] [i_9]))))))), var_7));
        var_28 += (((((14070132830291661220 ? 4255636436061008361 : 18642))) ? ((0 >> (37443 - 37442))) : (arr_10 [i_9] [i_9] [i_9])));
    }
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    {
                        arr_41 [i_10] [i_11] [i_10] [i_13] = var_10;
                        var_29 = min(((var_2 | (arr_9 [i_11] [i_11 - 1] [i_11 - 1]))), ((((var_4 ? var_9 : 1)) / (arr_15 [i_12] [i_11]))));
                        var_30 = var_7;
                        var_31 = ((((max(var_9, (max((arr_38 [i_10] [i_10] [i_11]), 0))))) ? (arr_22 [i_10] [i_10]) : (((var_11 ? 4048050018479073475 : var_10)))));
                        var_32 = 14070132830291661220;
                    }
                }
            }
        }
        var_33 = (arr_7 [i_10]);
        var_34 = ((max((arr_5 [i_10]), var_3)));
    }
    var_35 = 17211;
    var_36 = (min((((var_1 ? ((var_1 ? var_6 : var_1)) : 42700))), ((var_7 ? 172 : ((var_0 ? 17479001100190759375 : var_4))))));
    var_37 *= ((((6161 ? var_0 : var_6) >> (var_2 + 29267))));
    var_38 = ((((((min(33552384, -13))) ? var_3 : var_6)) != var_1));
    #pragma endscop
}
