/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245855
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((min(((min(var_9, var_2))), (var_0 >> var_6)))) ? (~0) : ((min(-93, var_7))));
    var_12 = 7;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (((~0) ? (((~(((18446744073709551615 > (arr_1 [i_0]))))))) : (~8568033699149732079)));

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_4 [14] [i_0] = (arr_1 [i_0]);

            /* vectorizable */
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                var_14 ^= (~-253888682);
                arr_8 [i_0] [1] [i_2] [i_2] = ((-253888682 ? (arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1]) : (~0)));
                var_15 = 0;
            }
            for (int i_3 = 2; i_3 < 14;i_3 += 1) /* same iter space */
            {
                var_16 = (max(var_16, var_8));

                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    arr_14 [2] [i_1] [i_3] [7] [i_4] [i_3 - 1] = (min(((min((arr_7 [i_0] [i_1] [i_3 - 2]), (arr_7 [i_0] [i_1] [i_3 - 2])))), (((((arr_11 [i_0] [i_0] [8] [i_0] [i_0] [3]) ? var_5 : var_1)) * (arr_12 [i_4] [i_3] [i_3 - 2] [i_3 - 2] [i_3 - 1])))));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_1] [i_1] [i_3] [i_4] [i_3] = (arr_9 [i_4] [i_3 - 2] [i_1] [i_0]);
                        arr_18 [i_0] [i_3 + 1] [i_5] [i_0] [i_5] [13] [i_0] = (((arr_0 [i_3 - 2] [i_3 + 1]) ? (arr_0 [i_3 + 1] [i_3 + 1]) : (arr_0 [i_3 - 1] [i_3 + 1])));
                        arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [1] = ((((((arr_0 [i_0] [5]) ? (arr_1 [i_0]) : 97))) ? -1 : 0));
                        arr_20 [i_0] = ((~(var_2 & 0)));
                        var_17 = var_5;
                    }
                    for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_3 + 1] [i_1] [4] [9] [i_6] = (min((arr_7 [i_1] [i_1] [i_6]), (((arr_13 [i_3 - 1] [i_3 - 1]) - (arr_3 [i_0] [i_3] [i_4])))));
                        arr_24 [i_0] [1] [i_3 - 2] [1] [i_6] |= (((var_7 <= (arr_6 [i_0] [i_3 - 1] [i_3 - 1]))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] = (arr_16 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3]);
                        arr_26 [i_6] [i_1] [i_6] [i_1] = (((((-1582977820814272001 ? (arr_2 [i_0]) : (((0 ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [13]) : 1)))))) ? (~10002061667408525059) : (((((-17 ? 0 : (arr_13 [i_3 - 2] [11]))))))));
                    }
                    arr_27 [i_0] [i_1] [i_3 - 2] [i_4] [i_0] = ((+((254632830906164683 ? (arr_12 [i_3 + 1] [i_3] [i_3] [i_3 - 1] [i_3 + 1]) : (arr_5 [i_3] [i_4] [i_3 - 2])))));
                }
            }
            for (int i_7 = 2; i_7 < 14;i_7 += 1) /* same iter space */
            {
                var_18 = (~(((((var_8 ? 3396637113 : var_7))) ? 255 : ((min(var_2, (arr_5 [12] [i_0] [i_7 - 1])))))));
                var_19 -= ((((~((((arr_6 [i_0] [10] [i_7]) < var_10))))) ^ ((~(((arr_11 [i_7 - 2] [i_7 + 1] [i_7 - 1] [i_7 - 1] [7] [i_0]) ? var_2 : 0))))));
            }
            var_20 = (var_3 ? ((+(((arr_2 [1]) * 3)))) : 1);
        }
        arr_30 [1] = ((var_7 ? var_0 : (((arr_3 [i_0] [i_0] [1]) ? ((min(255, (arr_29 [i_0])))) : (((!(arr_29 [i_0]))))))));
    }
    var_21 = ((var_0 ? (~var_0) : var_10));
    var_22 = var_3;
    #pragma endscop
}
