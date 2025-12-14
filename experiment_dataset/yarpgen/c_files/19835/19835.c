/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_13;
    var_19 = (((max(9223372036854775780, 10869929408411256146)) != ((10869929408411256146 >> (3038629229 - 3038629185)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_20 = (min((min((arr_3 [i_0 - 1]), (((arr_4 [1]) ? 26041 : var_8)))), (((!(arr_4 [i_0 + 2]))))));
                var_21 = (max(var_21, var_12));
                var_22 = (arr_0 [i_0] [i_1]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_7 [i_2] [i_2] = var_2;
        arr_8 [i_2] |= var_1;
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        arr_11 [10] = (((min(43625, -13)) > (arr_10 [i_3])));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                var_23 = ((((~((var_13 - (arr_15 [3]))))) * (((arr_13 [i_3] [i_6] [1]) - (((max((arr_13 [i_3] [i_3] [i_3]), (arr_23 [i_3] [i_4] [i_5] [i_6] [i_3])))))))));
                                var_24 = 536838144;
                                var_25 |= ((~((((min(var_14, (arr_23 [i_3] [i_4] [i_3] [i_6] [i_7])))) ? (((-1043170658 ? (arr_9 [i_6]) : (arr_9 [i_3])))) : -9223372036854775781))));
                                arr_24 [i_4] [i_4] = ((((~(min(1, 0)))) + (max(((15710674806274727072 ? 1 : var_0)), var_14))));
                            }
                        }
                    }
                    var_26 = (min(var_26, (((~(arr_13 [i_5] [i_5] [i_5]))))));
                }
            }
        }

        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_27 *= var_17;
            /* LoopNest 3 */
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        {
                            var_28 = (((min((min((arr_17 [i_3] [i_3] [i_3] [i_3]), var_11)), ((var_1 ? var_7 : (arr_10 [i_9]))))) / (arr_23 [i_3] [6] [i_9 + 2] [i_9 + 2] [i_3])));
                            var_29 = (max((((~var_10) ? var_9 : (4194303 >> var_14))), ((min(var_11, (var_14 <= var_14))))));
                        }
                    }
                }
            }
        }
    }
    var_30 = var_7;
    #pragma endscop
}
