/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((4178378069 ? 0 : (!46336)))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    arr_11 [i_0] [i_0] = (min(((~(~var_2))), 36856));
                    var_16 = ((+(min((arr_5 [i_0]), -19199))));
                }
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        arr_18 [i_3] [i_1] [i_0] [i_4] [i_0] = ((arr_4 [i_0] [i_0]) ? 5846805426867805269 : ((76898414 ? 13463770063167517094 : 19190)));
                        arr_19 [i_0] [i_0] [i_1 + 1] [3] [i_1] = ((1153540955 ? 46336 : 65535));
                        var_17 = (arr_3 [i_0] [i_1 + 1]);
                    }
                    arr_20 [i_0] [i_0] = var_0;
                    arr_21 [i_0] [i_0] [i_3] = ((((-(var_13 & var_10))) <= (((-(~var_0))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_18 = var_5;
                                arr_28 [i_0] [i_0] [i_0] [6] [i_6] = (max((min((30 - var_6), (arr_14 [i_1] [i_0] [i_1] [8]))), 0));
                                var_19 = (i_0 % 2 == zero) ? (((!(((var_13 ? (((arr_13 [i_0] [i_1]) >> (4218068881 - 4218068857))) : (((max(65535, 19199)))))))))) : (((!(((var_13 ? (((((arr_13 [i_0] [i_1]) + 9223372036854775807)) >> (4218068881 - 4218068857))) : (((max(65535, 19199))))))))));
                                var_20 = (max(var_20, ((min((min(((0 ? var_1 : 0)), (((62188 * (arr_8 [i_0] [i_5] [i_0])))))), (((((var_1 ? 19199 : var_7)) & (!46336)))))))));
                                arr_29 [i_0] = (max((!-36413), ((-8192 ? 27 : 3063927223))));
                            }
                        }
                    }
                }
                var_21 = (min(var_21, (((-3153728299 ? 8491171026056429664 : (~42921))))));
                var_22 = (max(var_22, ((max((((!(((var_7 ? var_11 : 32867)))))), 1)))));
                arr_30 [1] [i_0] = (-((((max(19172, 65535))) ? (arr_9 [i_0] [2] [i_1 + 2] [i_1 + 2]) : 11)));
            }
        }
    }
    #pragma endscop
}
