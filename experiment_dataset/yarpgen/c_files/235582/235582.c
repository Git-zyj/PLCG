/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {
                        var_14 &= 2374704313;
                        var_15 = (arr_4 [i_0]);
                    }
                }
            }
            var_16 = (min(((max(((!(arr_5 [i_0] [14] [i_0 + 2]))), var_7))), ((-(!2147483647)))));
        }
        var_17 = ((((arr_0 [i_0 + 2] [i_0 + 2]) ? (arr_0 [i_0 - 1] [i_0 - 3]) : var_7)));
        var_18 *= ((((((min(var_6, (arr_4 [i_0 - 2])))) ? 255 : (((77 != (arr_2 [i_0 - 3])))))) << (11539010179426799206 - 11539010179426799187)));
    }
    for (int i_4 = 3; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_19 = (((arr_4 [i_4 - 2]) << (((!(arr_12 [i_4] [i_4 + 2]))))));
        var_20 = (((((((1 % (arr_7 [i_4] [i_4] [12]))) != (((-32767 - 1) ? (arr_7 [i_4] [i_4 + 2] [10]) : (arr_5 [i_4 + 1] [0] [i_4])))))) <= (arr_14 [i_4] [i_4])));
        var_21 = (max(6433809857074204001, 16750827318983647624));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
    {
        var_22 += (arr_7 [i_5] [i_5] [1]);
        var_23 = (min((arr_8 [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_1 [i_5] [i_5])));
        var_24 += ((((((arr_10 [i_5] [i_5] [i_5] [i_5]) == ((min(0, 1)))))) < (arr_1 [i_5] [i_5])));
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                {
                    var_25 = (max(var_25, ((((arr_20 [i_7] [i_6] [i_5]) ? 6405895067683716447 : ((((arr_19 [i_5]) / (!var_0)))))))));
                    var_26 = (min(var_26, ((((((-(arr_8 [i_5] [i_6] [i_6] [i_6] [i_6])))) ? -108 : ((3673374539755603363 ? -776503097 : 0)))))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                var_27 = (arr_16 [i_5]);
                                arr_28 [i_5] [i_5] [i_5] [6] [i_9] = (min((!1172708332), ((1 == (!-2287116119740144817)))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 13;i_11 += 1)
        {
            for (int i_12 = 3; i_12 < 12;i_12 += 1)
            {
                {
                    var_28 = ((max(10128047442033809698, (arr_23 [i_10]))));
                    var_29 = (arr_22 [i_12] [i_10] [7] [i_11] [i_10]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_13 = 2; i_13 < 12;i_13 += 1)
        {
            for (int i_14 = 3; i_14 < 12;i_14 += 1)
            {
                {
                    arr_45 [i_10] [i_10] [i_14] [i_14] = ((((((((arr_7 [i_10] [i_13] [i_10]) ^ var_4))) ? (arr_29 [i_10]) : -1))) ? (arr_43 [i_10] [i_10] [i_14 + 1] [i_14 - 3]) : var_11);
                    var_30 = ((((((-(arr_7 [i_10] [i_13 - 2] [i_10])))))) == (arr_8 [i_14 - 1] [8] [i_14] [i_13] [i_10]));
                    var_31 = 108;
                    arr_46 [i_10] [i_10] [i_10] [i_10] = (((-((-(arr_44 [i_10] [i_13] [12]))))));
                }
            }
        }
        var_32 = (arr_30 [i_10]);
        var_33 &= (((((9223372036854775807 ? -1 : -3673374539755603364))) ? (min((((arr_41 [i_10] [i_10] [i_10]) ? 16804298271066506138 : 9223372036854775807)), (arr_21 [i_10] [i_10] [i_10] [i_10]))) : (((1044950866119074717 ? var_3 : (arr_42 [i_10] [i_10]))))));
    }

    /* vectorizable */
    for (int i_15 = 2; i_15 < 20;i_15 += 1)
    {
        var_34 ^= 976372001;
        var_35 &= (arr_13 [i_15 + 3] [i_15]);
        arr_51 [i_15 + 2] [i_15] = ((~(arr_10 [i_15] [i_15 + 3] [i_15] [i_15])));
    }
    #pragma endscop
}
