/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] &= ((-((-(arr_1 [4] [i_0 - 1])))));
        var_15 = (min(var_15, var_8));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_16 &= (arr_4 [i_1] [i_1]);
        arr_6 [i_1] = var_1;

        for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
        {
            var_17 = (min(var_17, ((min((arr_3 [i_1]), (arr_7 [i_1] [i_2]))))));
            arr_10 [i_1] [i_2] = (max((((((2855925384850686109 > (-9223372036854775807 - 1)))))), (((arr_4 [i_1] [i_2]) ? 2199702441 : (arr_4 [i_1] [i_1])))));
            var_18 = (min(var_18, (((var_2 || (arr_8 [i_1] [i_1] [i_1]))))));
        }
        for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
        {
            arr_13 [i_1] = var_4;
            var_19 ^= (1186899443548994656 ^ var_13);
            var_20 = var_8;
            arr_14 [11] [i_3] = (2199702441 - 7);
        }
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_21 = (((var_5 / (arr_12 [i_4] [i_4]))));
            arr_18 [i_1] [13] = ((((max((((var_6 > (arr_12 [i_1] [i_4])))), (max((arr_11 [i_4]), var_12))))) ? ((((((arr_5 [i_1] [i_1]) << (var_0 + 7195890957838398802)))) ? (((arr_11 [i_4]) / var_6)) : (arr_0 [i_1]))) : var_7));
            arr_19 [i_1] [i_1] = var_13;
        }
        for (int i_5 = 4; i_5 < 19;i_5 += 1)
        {
            arr_22 [i_5 - 4] [i_1] = ((~(!1935865509)));
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 18;i_8 += 1)
                    {
                        {
                            arr_33 [i_7] [i_7] [i_6] [i_5] [i_1] &= (arr_3 [i_1]);
                            var_22 = ((((!(arr_27 [i_8 + 2] [i_7] [i_1] [i_6] [i_5] [i_1]))) ? var_7 : 4006014625527588190));
                            var_23 ^= var_14;
                        }
                    }
                }
            }
            var_24 = (min(((max(var_14, var_3))), var_9));
            var_25 = (max(var_25, (((((min((65517 || 32), var_2))) ? ((((2095264855 && (arr_4 [i_5 - 2] [i_5]))))) : (min(var_6, (!1984565425))))))));
            var_26 = (((((((!(arr_8 [i_5] [i_5] [i_1]))))) ^ ((14440729448181963423 ? (arr_1 [i_1] [i_1]) : var_6)))));
        }
    }
    var_27 = (var_0 >= var_0);
    var_28 |= (((((~var_6) ? var_1 : var_12)) | (~var_8)));
    #pragma endscop
}
