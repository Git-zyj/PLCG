/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        arr_2 [12] = ((var_10 ? (arr_1 [i_0]) : (((-(var_10 - 198))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_0] [11] [i_2] [i_0] = ((!((((var_6 ? var_0 : (arr_4 [i_0] [i_0] [11])))))));
                    var_11 ^= (arr_7 [i_0] [i_0] [7] [i_2]);
                    arr_10 [i_2] [i_2] [2] = (((((arr_5 [2] [i_2]) ? ((var_0 ? var_5 : (arr_0 [i_1]))) : (max(1916789973, var_9)))) & (arr_6 [i_2] [i_1] [i_0])));
                    var_12 = (max(var_12, (arr_7 [i_0] [i_0] [i_0] [3])));
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 8;i_3 += 1)
    {
        var_13 ^= ((!(((4294967295 ? 4294967295 : 255)))));
        var_14 = (min(var_14, (max(((min(var_0, 4294967263))), ((~(arr_1 [i_3 + 2])))))));
        arr_13 [i_3] = ((((((arr_1 [i_3]) ? (arr_1 [11]) : (arr_1 [i_3])))) ? ((((!(arr_7 [i_3 - 1] [i_3] [i_3 - 1] [i_3]))))) : (((arr_1 [i_3]) / var_1))));
    }
    for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
    {
        var_15 = (~3529013437);
        var_16 += ((+(((arr_0 [13]) - 255))));
        var_17 = max(((((((var_6 ? (arr_3 [i_4] [i_4] [i_4]) : var_7))) ? (!7686692950501691569) : ((~(arr_5 [i_4] [i_4])))))), (arr_4 [i_4] [i_4] [i_4]));
        var_18 |= arr_6 [i_4] [5] [1];
    }
    for (int i_5 = 0; i_5 < 14;i_5 += 1) /* same iter space */
    {
        var_19 ^= (min(3529013437, 241));

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            arr_20 [i_6] [5] = (arr_0 [i_5]);

            for (int i_7 = 2; i_7 < 12;i_7 += 1)
            {
                arr_23 [i_5] [i_6] [i_7] [i_7] = ((!(((+(((arr_19 [1]) ? (arr_18 [i_5] [i_6] [i_7]) : (arr_21 [1] [i_7]))))))));
                arr_24 [8] [i_6] [i_5] = ((~(234 >= 2785389814893238496)));
                arr_25 [i_5] [i_5] [i_7] = (~var_10);
            }
            var_20 = (max(var_20, (((((!(((-(arr_17 [i_6])))))))))));
        }
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            arr_29 [i_8] [i_8] [i_5] = 18446744073709551615;
            var_21 = (((arr_0 [0]) & var_3));
        }
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {

            for (int i_10 = 2; i_10 < 13;i_10 += 1)
            {
                var_22 = (max(var_22, (((-(min(((((arr_1 [i_5]) & var_7))), (min(5465122707394553490, 18446744073709551608)))))))));
                var_23 ^= ((((~(arr_33 [i_5] [i_9] [i_10]))) & (arr_33 [i_5] [13] [i_10])));
                arr_35 [i_5] [i_5] [i_10] = (((-(var_2 % 10760051123207860063))));
            }
            var_24 = (((arr_21 [5] [i_9]) && 8165009674258894557));
            var_25 = (((((((141 ? (arr_27 [i_9] [i_9] [13]) : (arr_0 [i_9])))) ? ((32762 ? var_0 : var_9)) : (arr_1 [i_5])))) ? ((((max((arr_22 [i_5] [i_9] [i_5]), var_7))) ? (arr_15 [i_5] [8]) : ((4294967291 ? -3669498315687807132 : 10760051123207860062)))) : ((min((arr_21 [i_5] [i_9]), ((-(arr_3 [i_5] [i_5] [12])))))));
            arr_36 [i_5] [i_9] = 2281335511;
        }
    }
    var_26 = (min(var_26, var_10));
    #pragma endscop
}
