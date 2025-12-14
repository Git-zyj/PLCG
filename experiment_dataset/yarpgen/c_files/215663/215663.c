/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215663
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_18 += var_2;

        for (int i_1 = 1; i_1 < 9;i_1 += 1) /* same iter space */
        {
            arr_5 [i_1] = (((arr_0 [i_1]) ? ((1122558574589480479 ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))) : -6177));
            var_19 = (-32767 - 1);
            var_20 = ((116 ? (((-7425490459853129286 ? 9 : -119))) : 4592409748115715431));
        }
        for (int i_2 = 1; i_2 < 9;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                var_21 -= (((1880416926 ? 3724259951 : 3724259951)));
                arr_11 [i_3] [i_3] [i_3] [i_3] = var_13;
                var_22 &= (((arr_8 [i_0] [i_0] [i_0]) != 173));
            }
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    var_23 += (((-127 - 1) & 106));
                    arr_19 [i_0] [i_0] [i_5] [i_5] [i_5] &= (246 % 7425490459853129265);
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 11;i_7 += 1)
                    {
                        {
                            var_24 = 1807298640;
                            var_25 = (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                    }
                }
            }
            var_26 = ((arr_22 [4] [4]) * ((7425490459853129286 ? (arr_23 [10] [10] [10] [10] [10]) : 570707344)));
        }
        var_27 = ((var_8 ? 109 : (arr_23 [0] [0] [0] [i_0 + 4] [0])));
    }
    /* vectorizable */
    for (int i_8 = 3; i_8 < 23;i_8 += 1)
    {
        var_28 = (min(var_28, 4097915251));

        for (int i_9 = 1; i_9 < 22;i_9 += 1)
        {
            var_29 = ((-16425 + (arr_28 [i_9 + 1] [i_8 - 3] [i_9 + 1])));
            var_30 = (max(var_30, ((((((arr_30 [i_8]) > 2919582937)) ? var_10 : (arr_29 [i_9 - 1] [i_9 - 1] [i_8 - 1]))))));
            arr_31 [i_8] [i_8] [i_8] = (((((~(arr_27 [i_8] [i_8])))) ? (arr_29 [i_8 + 1] [i_8 + 1] [i_8 + 1]) : (arr_29 [i_9] [i_9] [i_9])));
        }
    }
    /* vectorizable */
    for (int i_10 = 2; i_10 < 18;i_10 += 1)
    {
        var_31 = (max(var_31, ((((-7425490459853129286 ? -3773 : 0))))));
        var_32 = (((-19404 ? 52 : -7425490459853129306)));
    }
    /* vectorizable */
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        var_33 &= (!872820629);

        for (int i_12 = 1; i_12 < 19;i_12 += 1)
        {
            var_34 = (arr_26 [i_12 - 1]);
            var_35 = (min(var_35, 1058412691));
            var_36 = ((((((arr_36 [i_11]) ? var_1 : 1688188934))) ? (!-7425490459853129286) : 1656744775));
            var_37 = (((arr_26 [i_11]) ? (arr_29 [i_11] [i_11] [i_11]) : (arr_29 [i_12 - 1] [i_11] [i_11])));
        }
        for (int i_13 = 1; i_13 < 17;i_13 += 1)
        {
            var_38 = (~8456);

            for (int i_14 = 1; i_14 < 18;i_14 += 1)
            {
                var_39 = var_15;
                var_40 = (min(var_40, (((~(arr_28 [i_11] [i_11] [i_11]))))));
            }
            var_41 = (max(var_41, (((125 << (((((-127 - 1) + 157)) - 24)))))));
        }
        for (int i_15 = 1; i_15 < 17;i_15 += 1)
        {
            var_42 = ((26399 ? -28524 : 249));
            var_43 = var_11;
            var_44 = var_5;
            var_45 = (max(var_45, (-127 - 1)));
        }
    }
    var_46 = (min((((!(((var_2 ? var_0 : 1607000133)))))), (min(((26399 ? var_3 : var_13)), -32739))));
    #pragma endscop
}
