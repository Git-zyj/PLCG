/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((1 ? (min(6738879694565431011, var_7)) : (((var_8 ? var_8 : var_7))))) % (min((var_5 ^ var_10), (min(255, 4987848122291898005)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = (arr_0 [i_0]);
        var_12 = (min(var_12, (((2600118708495739060 + (((arr_0 [i_0]) ? (arr_1 [i_0]) : var_7)))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        var_13 += ((-1 ? (arr_13 [i_3] [i_2] [i_1 + 2] [18]) : 255));
                        arr_14 [i_1] [i_2] [i_2] = ((513326331 ? (!var_8) : (((arr_11 [i_1] [13] [i_1 + 2] [i_1 + 2] [18]) - (arr_11 [i_1] [i_2] [i_2] [i_3] [i_4])))));
                        var_14 = ((!(arr_12 [i_1])));
                    }
                }
            }
            var_15 = (arr_6 [0] [i_1 - 1]);
            var_16 = var_5;
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_17 = (!var_7);
            var_18 = (((arr_10 [i_1 + 2]) ? (arr_10 [i_5]) : (arr_7 [16] [i_1 + 2])));
            var_19 = (arr_7 [i_1] [i_5]);
        }
        for (int i_6 = 4; i_6 < 18;i_6 += 1)
        {
            var_20 = ((var_5 || (arr_11 [i_6 - 4] [i_6] [i_6] [i_6 - 4] [i_6])));
            arr_20 [i_1] [i_6] [i_1] = ((var_5 ? var_6 : ((~(arr_13 [i_6] [i_6 - 1] [i_6] [i_1])))));
            var_21 = ((~(((arr_18 [i_1] [i_1]) & 1))));
        }
        var_22 = 1;
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_25 [i_7] [i_7] = (((((!(((var_3 ? var_6 : var_4)))))) / ((((1 << 1) || ((max(var_9, (arr_9 [i_7] [10] [i_7])))))))));

        for (int i_8 = 0; i_8 < 10;i_8 += 1)
        {
            arr_29 [i_8] = (((min((arr_21 [i_7]), (74 >> 1))) - (max((1 + -1615226263), (8389 + 1)))));
            var_23 = var_10;
            var_24 = (((max(var_10, (arr_13 [i_8] [i_8] [i_7] [i_7])))) ^ (min(3096614239, (arr_13 [i_7] [i_8] [7] [i_8]))));
        }
        for (int i_9 = 2; i_9 < 9;i_9 += 1)
        {
            var_25 = ((!((max((var_3 >= var_1), (min((arr_21 [i_7]), 1)))))));

            for (int i_10 = 0; i_10 < 10;i_10 += 1)
            {
                /* LoopNest 2 */
                for (int i_11 = 2; i_11 < 8;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 9;i_12 += 1)
                    {
                        {
                            var_26 = ((var_0 ^ (((max(1, 1))))));
                            var_27 = ((11507726226881652853 / (((-8394 ? 8453590 : 255)))));
                        }
                    }
                }
                var_28 = (max(var_28, -513326331));
                var_29 = ((1 ? 1 : 127));
            }
            for (int i_13 = 0; i_13 < 10;i_13 += 1)
            {
                var_30 = ((((~(min((arr_34 [i_7] [i_7] [i_13]), 9101840578941188522))))) ? ((max((((8811 - (arr_16 [i_7] [i_13] [i_13])))), (((arr_22 [i_7]) ? 1 : var_0))))) : (max(-8788, (min(var_2, -8453567)))));
                var_31 = var_1;
                var_32 = 4294967286;
                /* LoopNest 2 */
                for (int i_14 = 2; i_14 < 8;i_14 += 1)
                {
                    for (int i_15 = 4; i_15 < 8;i_15 += 1)
                    {
                        {
                            arr_49 [i_13] [i_9] [i_13] [2] [i_15 - 4] = (((-(((1463213921 <= (arr_19 [i_14 + 2] [i_13] [i_7])))))));
                            var_33 += min(((var_1 ? (arr_32 [i_15] [i_14 + 2] [i_14 + 1] [i_9 + 1]) : (arr_32 [i_14 + 2] [i_14 + 2] [i_14 + 1] [i_9 + 1]))), var_1);
                        }
                    }
                }
            }
            /* vectorizable */
            for (int i_16 = 0; i_16 < 10;i_16 += 1)
            {
                var_34 += (arr_45 [i_9 + 1] [i_9] [i_9] [6] [i_9 - 1]);
                arr_54 [i_16] [2] [i_16] [i_16] = (arr_46 [i_9 - 1] [i_9] [i_9] [i_9] [i_9 + 1]);
                arr_55 [i_7] = (((arr_28 [i_9 + 1]) ? (arr_28 [i_9 - 2]) : (arr_28 [i_9 + 1])));
                var_35 = (arr_15 [i_9 + 1]);
            }
            for (int i_17 = 0; i_17 < 1;i_17 += 1)
            {
                var_36 = (min(var_36, ((min((min(var_10, (arr_53 [0] [i_9 - 2] [i_9] [i_9 + 1]))), ((((((-4029935416450207882 ? var_10 : 4294967294))) && (((~(arr_40 [i_7] [i_9] [i_17] [i_17]))))))))))));
                var_37 = (((arr_40 [i_9 + 1] [i_9 + 1] [i_9 - 2] [i_9 - 2]) << ((min(1, 127)))));
            }
            var_38 = (!(((((max(var_6, var_5))) ? ((min(var_0, var_4))) : var_3))));
            arr_59 [i_7] = (((-513326331 != 165997744) ? ((((max((arr_42 [i_7] [i_7]), var_8))) ? (max(var_8, (arr_56 [i_9] [i_9 + 1] [i_9]))) : ((min(8453590, 513326330))))) : 3395795079));
        }
        var_39 = arr_9 [i_7] [i_7] [i_7];
    }
    #pragma endscop
}
