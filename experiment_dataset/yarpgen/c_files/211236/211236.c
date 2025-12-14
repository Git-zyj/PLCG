/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += ((~((var_2 ? var_7 : 7147))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_15 = 251;

            for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
            {
                arr_8 [i_0] [i_1] [i_1] [i_2] = ((-(arr_5 [i_0] [i_0] [i_1] [i_2])));
                arr_9 [i_0] [i_0] [i_1] [i_2] = (arr_5 [i_0] [i_1] [i_1] [22]);
            }
            for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
            {
                arr_14 [i_3] [i_1] [i_0] = var_0;
                arr_15 [i_0] = (((~var_1) ? ((364873957 >> (var_8 - 798131103))) : (arr_11 [i_0] [i_0] [i_0])));
            }
            for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
            {
                arr_18 [i_4] = ((-(arr_5 [i_0] [i_0] [i_0] [i_0])));
                var_16 = (arr_6 [i_4] [i_1] [i_0] [i_0]);
                var_17 = 2103934805394358585;
                var_18 = (min(var_18, (((16342809268315193031 <= (arr_17 [i_0]))))));
                var_19 = (((3 >= 5038251662005215192) ? (arr_1 [19]) : (arr_10 [i_0] [i_1] [i_4])));
            }
            var_20 = (((arr_3 [i_0]) < var_12));
            var_21 = (((arr_17 [i_0]) ? (arr_13 [i_0] [i_0] [i_0] [i_0]) : ((-(arr_0 [i_0])))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 24;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
            {
                var_22 = (((arr_22 [i_0] [i_0] [3]) ? var_12 : (arr_6 [i_0] [i_0] [i_0] [i_0])));
                var_23 = 59;
            }
            for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
            {

                for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_24 = (arr_1 [0]);
                    var_25 = ((var_13 ? (arr_13 [i_5] [i_8 - 1] [i_8 - 1] [i_8 - 1]) : (arr_13 [i_5] [i_8 - 1] [i_8 - 1] [i_8 - 1])));
                    arr_28 [i_5] = 5499896089902447739;
                    var_26 = (!-15659);
                    arr_29 [i_5] [i_7] = var_2;
                }
                for (int i_9 = 1; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    var_27 ^= ((-5499896089902447718 ? var_7 : ((((arr_22 [i_0] [i_0] [i_7]) == (arr_5 [16] [i_5] [i_7] [i_9 - 1]))))));
                    arr_32 [i_0] [i_0] [i_5] [i_9] = (((arr_7 [i_0] [i_0] [i_0] [i_0]) * (arr_30 [i_9] [i_9 - 1] [i_9 - 1])));
                }
                var_28 += (arr_3 [i_7]);
                arr_33 [i_5] [i_5] [i_5] [i_5] = (((-12645 ? 1823422057 : 12614)));
                arr_34 [i_0] [i_0] [i_5] [i_5] = (((arr_19 [i_0] [i_5] [i_7]) + (arr_26 [i_5])));
            }
            for (int i_10 = 0; i_10 < 24;i_10 += 1) /* same iter space */
            {
                arr_37 [i_0] [i_0] [i_5] [11] = 16342809268315193031;
                arr_38 [i_5] [i_5] [i_10] = -5499896089902447739;
                arr_39 [i_0] [i_5] = 2103934805394358553;
            }
            arr_40 [i_5] [i_5] = (((arr_17 [1]) ? (arr_17 [i_0]) : 1505561810));
        }
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 24;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 24;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 0;i_13 += 1)
                    {
                        arr_48 [i_0] [i_0] [i_12] |= (min(((58389 && (arr_13 [i_11] [i_12] [i_13 + 1] [i_13 + 1]))), ((!(arr_13 [i_13] [i_13 + 1] [i_13 + 1] [i_13 + 1])))));
                        var_29 = (arr_2 [i_11]);
                        var_30 = (max(15268, 2));
                    }
                    arr_49 [i_0] [i_11] [9] = 1823422054;
                }
            }
        }
    }
    var_31 = 1;
    #pragma endscop
}
