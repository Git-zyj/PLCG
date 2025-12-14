/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = max(var_10, var_12);

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_19 = arr_1 [i_0];
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((((9223372036854775807 == var_3) ? (((arr_11 [i_3] [i_3] [i_3 + 2] [i_3 - 1] [i_3] [i_3 + 2]) ? var_16 : (arr_7 [5] [5] [i_3 + 1] [i_3 + 1]))) : (arr_11 [i_3] [i_3] [i_3 + 3] [i_3 + 1] [i_3 + 1] [i_3 + 2]))))));
                                var_21 = 8972563762432012613;
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_4] = 927052477043101127;
                            }
                        }
                    }
                    arr_13 [i_0] [i_1] [4] = -var_4;
                }
            }
        }
        arr_14 [0] = 9223372036854775807;
    }
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        arr_17 [i_5] = (-(min(var_1, (var_11 & var_13))));
        arr_18 [i_5] &= 1354591743;
    }
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            {

                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 21;i_10 += 1)
                        {
                            {
                                arr_31 [i_7] [i_7] [i_7] [i_7] [12] = max((max(9223372036854775807, 55)), (((~(arr_25 [8] [16] [i_6 + 1] [i_6 - 3])))));
                                arr_32 [i_7] [i_8] [i_7] [2] = (min(((-(arr_30 [i_6 - 3]))), (((arr_19 [i_6 + 2]) ? var_12 : var_0))));
                                var_22 = var_13;
                            }
                        }
                    }
                    var_23 = (4294967285 > -927052477043101130);
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    arr_35 [i_11] [i_7] [i_11] = var_15;
                    var_24 = 16277260999723530465;
                    arr_36 [i_11] = (+-6837428503062016643);
                }
                var_25 = (max(var_25, ((((((max(var_3, 10)) * var_4)) % (((((((var_10 / (arr_19 [i_7])))) <= (arr_34 [i_7]))))))))));
                arr_37 [i_6] [i_7] = (((((((((-2147483647 - 1) ? (arr_19 [6]) : var_1))) ? -702982687 : (arr_27 [i_6] [i_6 - 1] [12] [i_7] [i_7] [14])))) * ((((min(var_17, var_9))) ? ((min(var_17, var_14))) : ((1202117196 ? 16721 : -927052477043101127))))));
            }
        }
    }
    var_26 = ((((-1954400565 ? ((var_5 ? var_7 : var_13)) : ((1126733686 ? -44 : 6)))) | ((-((var_3 ? 2147483647 : var_12))))));
    var_27 = (min(var_27, var_8));
    #pragma endscop
}
