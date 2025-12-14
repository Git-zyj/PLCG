/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210448
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_2 + 2] = 224;
                    var_20 -= (!(((578225374 ? 220 : (arr_3 [i_2 + 2])))));
                }
            }
        }
        arr_8 [i_0] [10] = (arr_2 [i_0] [8]);

        for (int i_3 = 4; i_3 < 14;i_3 += 1)
        {
            var_21 = ((var_5 ? ((var_14 + (arr_6 [i_0] [4] [i_0] [i_3 - 4]))) : var_1));

            for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    var_22 = (((1 ? 18850 : 0)));
                    arr_17 [i_4] [i_4] = ((((((arr_15 [1] [i_3] [i_3] [0] [10]) ? (arr_13 [8] [i_4] [1] [i_0]) : (arr_16 [i_0] [i_4] [i_5 + 1])))) ? var_2 : 18840));
                }
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_26 [i_0] [i_3] [i_3 - 3] [i_4] [i_4] [i_7] = (-88 / (arr_19 [i_7] [i_4] [i_4] [5]));
                        arr_27 [i_0] [i_3 - 1] [12] [i_4] [i_7] = (((var_17 ? 2746992694 : (arr_16 [i_0] [i_4] [i_4]))) >> (578225375 - 578225351));
                    }
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        arr_30 [i_4] [i_6] = (((arr_21 [5] [i_3] [8] [i_3 - 1]) + (arr_21 [i_0] [i_4] [i_8] [i_3 - 1])));
                        arr_31 [i_0] [i_4] [i_0] [i_0] [14] [9] = (((arr_13 [i_8] [i_3 - 3] [i_4] [i_0]) ? (arr_28 [i_4] [4] [i_3 + 1] [1] [i_3 - 1]) : (arr_13 [i_0] [i_3 - 1] [1] [i_6])));
                        arr_32 [i_0] [6] [6] [i_4] [i_6] [i_8] [i_8] |= (arr_0 [i_4]);
                        arr_33 [i_0] [i_3] [i_4] [i_6] [i_4] = ((((var_5 ? 86 : var_4)) ^ (arr_4 [i_0] [i_0] [i_0])));
                        var_23 = (((arr_13 [i_0] [i_3] [i_0] [i_3]) ? var_3 : (((arr_16 [i_0] [i_4] [i_0]) & var_11))));
                    }
                    var_24 = ((arr_21 [i_3 + 1] [i_3 - 3] [i_3 - 3] [i_4]) ? (-1930232193 > 1) : (~-638988716));
                }
                var_25 ^= 53293;
                arr_34 [i_4] [i_4] [i_3] [i_3] = (arr_15 [i_3] [i_3] [i_3 - 2] [i_3] [i_4]);
                arr_35 [i_3] [i_4] = 0;
            }
            for (int i_9 = 0; i_9 < 15;i_9 += 1) /* same iter space */
            {
                arr_38 [i_9] [4] [i_3] [i_0] = 238;
                arr_39 [i_0] [0] [i_9] [i_9] = (arr_37 [i_3 - 4] [i_3]);
                var_26 -= 4339963364116104478;
            }
        }
    }
    var_27 = (((((((var_19 ? var_3 : -16)) & var_2))) ? (~var_2) : (((((var_13 ? 1073741824 : var_3))) ? (((17014 ? -30 : 7045650757615582113))) : var_2))));
    #pragma endscop
}
