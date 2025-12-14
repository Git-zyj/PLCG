/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [19] [i_0] = ((((127 & (arr_2 [i_0] [2]))) & (arr_2 [i_0] [i_0])));
        arr_4 [i_0] = (((2147483647 / var_0) ? ((min((((arr_0 [7] [7]) + (arr_0 [i_0] [i_0]))), (arr_1 [7])))) : (65535 - 70368744177663)));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_16 = (min((max((max(var_7, 116)), (arr_1 [2]))), ((((((-5293 ? (arr_6 [i_1] [i_1]) : (arr_5 [i_1])))) && (arr_2 [i_1] [i_1]))))));

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_17 = ((0 - (arr_9 [i_2])));
            var_18 = ((1 ? -8194978180105925369 : 36087392));
        }
        var_19 = (((min(255, var_7)) | 1844796783));
    }
    var_20 = max((!-5500515493258865613), var_12);

    for (int i_3 = 1; i_3 < 1;i_3 += 1)
    {
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 19;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {

                        for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                        {
                            arr_22 [i_5] [i_5] = ((((max((arr_12 [i_5 + 1]), (min((arr_13 [i_4]), var_11))))) ? (arr_1 [i_4]) : (((arr_1 [i_5 + 1]) ? (((max(-11585, (arr_18 [i_3 - 1] [i_5] [i_5] [i_7]))))) : ((1073741792 ? (arr_13 [i_3 - 1]) : (arr_0 [i_3] [i_4])))))));
                            arr_23 [i_5] [20] [i_5] [i_3] = (min(-1518521278, 0));
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            arr_26 [i_8] [i_5] [3] [i_6] = var_3;
                            arr_27 [i_6] [i_5] [i_5] [i_3 - 1] = ((arr_15 [i_5]) ? (arr_15 [i_5]) : (arr_15 [i_5]));
                            arr_28 [i_5] [i_5] [i_5] = (-2147483647 - 1);
                        }
                        var_21 *= 2059005703;
                        arr_29 [i_5] [1] [i_4] [i_5 - 1] [i_5 - 3] [i_6] = (max((-26368 * 31), (arr_12 [3])));
                    }
                }
            }
        }
        arr_30 [i_3 - 1] [i_3 - 1] = (arr_16 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]);
        var_22 = ((~((250 ? 0 : 1))));
        var_23 = (min(var_23, (((((((1 ? 8 : (-2147483647 - 1))))) ^ ((63235 & ((5768102286986728967 ^ (arr_15 [1]))))))))));
    }
    for (int i_9 = 4; i_9 < 9;i_9 += 1)
    {
        var_24 = ((((((arr_32 [i_9] [i_9]) ? (((max(15, (arr_11 [i_9 - 3]))))) : -1))) + (arr_15 [i_9])));
        arr_34 [i_9 - 1] = var_12;

        for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
        {
            arr_37 [i_10] = var_5;

            for (int i_11 = 0; i_11 < 1;i_11 += 1)
            {
                var_25 = (max(var_25, (0 << 1)));
                arr_42 [i_10] [i_10] [i_10] = (arr_41 [i_10]);
            }

            for (int i_12 = 0; i_12 < 12;i_12 += 1)
            {
                var_26 = (((((arr_21 [i_10] [i_9] [i_12] [i_10] [i_10]) ? (arr_13 [i_12]) : (((max(5, 217)))))) < (((((arr_25 [10] [i_9 - 2] [i_9 - 3] [i_9 + 1] [i_9 - 2] [i_10] [4]) >= (arr_25 [i_9] [i_9 - 1] [i_9 + 3] [i_9 + 2] [i_9 + 3] [i_12] [i_12])))))));
                arr_47 [i_9] [i_10] [i_10] [i_9] = (arr_8 [i_9 - 4] [i_10]);
                arr_48 [i_10] [10] [i_9 + 2] [i_10] = ((((((arr_5 [i_10]) ? (arr_5 [i_12]) : (arr_5 [i_9])))) >= (arr_38 [i_10] [i_10])));
            }
        }
        for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
        {
            var_27 &= (arr_45 [i_9] [i_9] [i_9] [i_9]);
            arr_52 [i_13] = (((-6346849780577745620 & 66) & (((~var_6) | ((max(1, 4294967295)))))));
        }
    }
    #pragma endscop
}
