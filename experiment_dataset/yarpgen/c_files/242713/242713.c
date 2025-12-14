/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_19 = ((+((var_2 ? (arr_1 [i_0]) : var_14))));
        var_20 = ((!(arr_0 [15])));
        var_21 &= var_9;

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        arr_10 [i_0] = ((((min(((~(arr_1 [i_3]))), var_17))) < var_12));

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_22 = ((!(-9223372036854775807 - 1)));
                            arr_13 [i_3] [i_0] = (!var_14);
                        }
                    }
                }
            }
            arr_14 [i_0] = (arr_4 [i_0]);
            var_23 = ((((-((var_6 ? (arr_9 [i_0] [i_1] [i_0] [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_1] [i_0]))))) > ((max(190, var_10)))));
        }
        var_24 = (max(var_24, var_2));
    }
    for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
    {
        arr_18 [1] [i_5] = (arr_15 [i_5]);
        var_25 = -182349830;
        arr_19 [i_5] [i_5 + 1] = (~(((!((!(arr_17 [i_5] [7])))))));
        var_26 += ((!(arr_2 [i_5 + 3] [i_5 - 1])));

        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {

            for (int i_7 = 3; i_7 < 11;i_7 += 1)
            {
                arr_24 [i_6] [i_5] = (arr_20 [i_6] [i_5 - 2]);
                arr_25 [i_5] [i_5] = (((((max(-1, (arr_7 [i_5] [i_5] [i_6] [i_7])))) ? var_14 : ((var_5 ? 13438243838370763044 : (arr_12 [i_5 + 3] [i_5 - 1] [i_6 - 1] [5] [4] [i_7 - 1]))))));
            }
            arr_26 [i_5] [i_6] = ((6060197387785293301 ? (2500980019159588173 + -821506746) : (arr_20 [i_6 + 1] [3])));
        }
        for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
        {
            arr_30 [i_5] [i_5] [i_5] = (((arr_12 [i_5 + 3] [i_5 - 1] [i_5] [i_5 - 2] [i_5] [i_5 + 3]) ? (arr_12 [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5]) : (arr_12 [i_5 + 2] [i_5 + 2] [i_5] [i_5] [i_5 + 3] [i_5 - 1])));
            var_27 = (arr_17 [i_5] [i_5 + 2]);
            arr_31 [i_5] [9] [i_8] = var_4;
            var_28 ^= (min((((arr_6 [i_8] [i_8]) ? var_12 : var_2)), (arr_6 [i_8] [i_8])));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
        {
            var_29 = (max(var_29, ((((arr_7 [i_5] [i_5 - 2] [i_5] [i_5 + 2]) < (arr_7 [i_5 - 1] [i_5] [i_5 - 2] [i_5 - 2]))))));
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 12;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 12;i_12 += 1)
                    {
                        {
                            arr_44 [i_5 - 1] [i_5 + 3] [i_5] = var_0;
                            arr_45 [i_5] = ((arr_20 [i_5 + 3] [i_5 + 3]) & var_15);
                            var_30 = (((arr_7 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_12]) ? (arr_7 [i_5 - 1] [i_5 - 1] [i_10] [i_5 - 1]) : (arr_7 [i_9] [i_10] [i_11] [4])));
                            arr_46 [i_5] [11] [i_5] [i_11] [i_12] [8] = (arr_22 [i_11] [i_10] [i_5 + 3] [i_5 + 3]);
                            var_31 = var_17;
                        }
                    }
                }
            }
            arr_47 [i_5] = (((arr_12 [i_5] [i_5] [i_5] [i_5] [i_5 + 3] [i_5 + 1]) | (arr_39 [i_5 - 2] [8] [i_5 + 3] [i_5 + 2] [i_5] [i_5 - 1])));
        }
        for (int i_13 = 0; i_13 < 12;i_13 += 1)
        {
            arr_52 [i_5] [i_5] [i_5] = (max((arr_51 [i_5 + 1]), (((~(arr_9 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1] [i_5 - 1]))))));
            var_32 = (max(var_32, (arr_48 [i_13] [i_13])));

            for (int i_14 = 0; i_14 < 12;i_14 += 1)
            {
                arr_57 [i_5] [i_5] = -7117854204196844059;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 12;i_15 += 1)
                {
                    for (int i_16 = 1; i_16 < 8;i_16 += 1)
                    {
                        {
                            var_33 = ((~((~(arr_28 [i_5])))));
                            arr_65 [i_5] [i_13] [i_13] [i_13] [i_14] [i_5] [i_16] = (arr_43 [i_16 - 1] [i_15] [i_5] [i_5] [i_5] [i_5] [i_5 + 1]);
                            var_34 = (-30492 - (~-8633696638178990994));
                        }
                    }
                }
                arr_66 [i_5] [i_5] [i_5] [i_5] = (((var_3 & (arr_23 [i_13] [i_13] [i_14] [i_13]))));
            }
        }
    }
    for (int i_17 = 2; i_17 < 9;i_17 += 1) /* same iter space */
    {
        arr_70 [i_17] = (var_6 / 65535);

        for (int i_18 = 0; i_18 < 12;i_18 += 1) /* same iter space */
        {
            arr_74 [i_17 - 1] = (max((arr_40 [6]), (min((min(var_5, var_17)), (arr_27 [i_17] [i_17 - 2] [i_18])))));
            var_35 = (min(var_35, (((((!(((-(arr_69 [8] [i_18])))))) ? ((((arr_68 [i_17 + 3] [i_18]) ^ (arr_32 [i_17 - 1] [8])))) : (min(var_15, (arr_53 [2] [i_18] [2]))))))));
        }
        for (int i_19 = 0; i_19 < 12;i_19 += 1) /* same iter space */
        {
            arr_78 [i_17 - 1] [i_17 - 2] [i_19] = var_6;
            arr_79 [i_19] = var_9;
        }
        arr_80 [i_17] = (((arr_39 [i_17] [i_17] [i_17] [i_17 + 3] [i_17 - 1] [i_17 - 2]) ? (((((arr_39 [i_17 + 1] [i_17 - 1] [4] [i_17 + 1] [i_17 - 1] [i_17 + 2]) && var_15)))) : (~6932107817101053814)));
    }
    var_36 = min((min((0 == 5255073774015436995), (max(var_4, 6060197387785293301)))), (var_3 || var_16));
    #pragma endscop
}
