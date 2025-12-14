/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243579
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_11 [i_1] [1] &= ((~(arr_3 [i_0] [i_0] [i_2])));

                        for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
                        {
                            arr_14 [13] [13] [i_2] [i_2] [i_2] [i_4] = ((var_14 | (arr_2 [i_0] [i_1])));
                            var_15 &= (58469 >= 7053);
                        }
                        for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
                        {
                            arr_18 [i_2] = ((~((((arr_10 [i_0] [i_1 + 3] [i_2] [i_5]) != (arr_10 [i_0] [i_1 - 2] [i_5 + 1] [1]))))));
                            var_16 = ((min(var_6, var_13)));
                            arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (((((var_11 * var_9) - (max((arr_6 [i_0] [i_1] [i_0]), 7062)))) <= (((((1 >> (((arr_5 [i_5 + 1] [i_1]) - 1883)))))))));
                        }
                        for (int i_6 = 0; i_6 < 0;i_6 += 1) /* same iter space */
                        {
                            var_17 = (max((max((((var_9 ? var_13 : 58455))), (arr_16 [i_0] [i_1]))), ((((0 ? var_9 : (arr_6 [i_0] [i_1 - 1] [i_2]))) % (((7073 << (var_3 - 193))))))));
                            var_18 = ((arr_20 [i_0] [i_0] [i_2] [i_3] [8]) ? ((max((arr_0 [i_6]), (arr_0 [i_2])))) : ((~(arr_21 [i_2] [i_2] [i_3 + 1] [i_6 + 1]))));
                        }
                        for (int i_7 = 0; i_7 < 0;i_7 += 1) /* same iter space */
                        {
                            var_19 += min((((arr_10 [i_0] [i_0] [i_3] [i_7]) ? var_7 : (((~(arr_4 [i_0] [i_1] [i_0])))))), ((max((~var_14), (arr_5 [i_1 + 3] [i_1 + 1])))));
                            var_20 += ((52446 ? 71 : 58486));
                            arr_27 [i_0] [i_0] [i_2] [i_3 + 3] [i_2] = ((-(arr_6 [i_2] [i_3] [1])));
                            arr_28 [i_1] = (max(1, 7062));
                        }
                    }
                }
            }
        }
        arr_29 [i_0] = ((((min((arr_10 [i_0] [i_0] [i_0] [i_0]), -var_14))) || ((min(90919666947022240, (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 16;i_9 += 1)
            {
                {
                    var_21 = var_4;
                    var_22 -= ((((var_7 ? -var_10 : var_14)) - (var_1 - 58484)));
                }
            }
        }
    }
    for (int i_10 = 1; i_10 < 21;i_10 += 1)
    {
        var_23 = (((max((arr_35 [i_10]), (var_8 ^ var_11))) < (((~(((!(arr_35 [i_10])))))))));
        var_24 = (max((min((((var_1 ? var_13 : (arr_36 [i_10] [i_10])))), (((arr_35 [i_10]) - var_7)))), var_4));
    }
    var_25 = var_0;
    #pragma endscop
}
