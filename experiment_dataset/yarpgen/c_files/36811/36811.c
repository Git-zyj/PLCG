/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((((-(arr_0 [i_0 - 2]))) >> 1));
                arr_6 [i_1] [i_1 + 2] = ((~((1 ? ((var_19 ? 0 : 58951)) : 1593317823))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_9 [17] [i_2] &= (((-(arr_7 [i_2]))));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_20 = (min(var_20, ((max(65, ((-(((arr_11 [i_2] [i_3] [2]) << (128 - 124))))))))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                var_21 = (!255);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        {
                            var_22 = (i_3 % 2 == 0) ? (((~((9223372036854775807 >> (((arr_14 [i_3] [i_3]) - 17359))))))) : (((~((9223372036854775807 >> (((((arr_14 [i_3] [i_3]) - 17359)) + 38178)))))));
                            var_23 += (((var_3 % var_12) ? ((1 ? 6584 : 8254)) : (!50)));
                        }
                    }
                }
            }
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    var_24 = (min(var_24, ((((54405 ? ((var_9 ? 0 : var_19)) : var_10))))));
                    arr_23 [i_3] [i_3] [i_8] = (arr_15 [i_3] [i_2]);
                }
                for (int i_9 = 1; i_9 < 17;i_9 += 1)
                {
                    arr_27 [i_3] [i_3] [i_7] [1] [i_3] = ((((((arr_18 [i_2] [i_3] [i_3]) * (((arr_25 [i_3] [3] [1]) ? 4294967289 : -89))))) ? (((6454968513143407888 * 14336) >> ((249 ? 1 : 158123749)))) : ((((((1 ? 6377 : 0))) ? 2147483647 : ((max(var_19, (arr_20 [i_3])))))))));
                    var_25 = (max(var_25, (arr_12 [i_2])));
                    var_26 = (max(var_26, 1));
                    var_27 = ((1 ? (min((max((arr_21 [3]), 1610612736)), 0)) : (arr_13 [i_9] [i_3] [i_9])));
                }

                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    var_28 = (((-11639 + 2147483647) >> (max(1, (min(-1, 40))))));
                    var_29 = (max(var_29, ((max((((arr_13 [i_2] [i_2] [i_2]) % -64)), 1)))));
                    arr_32 [i_3] [i_7] [i_3] [i_3] [i_3] = (((max(1, 1))));
                }
                var_30 = var_0;
                var_31 = (((((((var_8 ? 1 : 27)) % ((-68 ? (arr_28 [i_2] [15] [i_7]) : 26053))))) ? (((!(~39)))) : 628413838));
            }
            arr_33 [i_3] [i_3] = ((~((max((max(11, 1)), (!72))))));
        }
        for (int i_11 = 4; i_11 < 18;i_11 += 1)
        {
            var_32 = (max(((1 ? 65525 : 1)), (arr_14 [i_2] [i_11])));
            var_33 = 422545908069680914;
        }
        var_34 = (((((((max((arr_10 [i_2] [i_2] [i_2]), 1)))) | var_7)) % ((((((122 ? 0 : 1))) ? ((5 ? 4160749568 : 1)) : ((((arr_11 [i_2] [5] [i_2]) ? 32761 : 1))))))));
        var_35 = ((-var_11 ? ((1 ? 1 : (arr_34 [i_2] [i_2]))) : (((arr_34 [i_2] [i_2]) ? (arr_34 [i_2] [i_2]) : 96))));
    }
    var_36 = ((var_15 ? var_16 : var_12));
    #pragma endscop
}
