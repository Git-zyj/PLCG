/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((-32767 - 1) < 0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
                {
                    var_19 = var_9;
                    arr_6 [i_1] [i_0] [i_1] = (arr_5 [11] [13] [i_2]);
                    arr_7 [i_0] [i_1] [i_2] = (~125);

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_0] = -3426511545702015633;
                        var_20 = ((((~(!-1214277908))) > 87));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        arr_16 [i_4] [i_1] [6] [i_1] [i_1] [i_0] &= (arr_2 [i_1] [i_2] [i_4]);
                        var_21 = (max(var_21, (!var_11)));
                        var_22 = (~206);
                    }
                    arr_17 [13] [i_1] [i_0] [i_2] = 1;
                }
                for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
                {

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_23 = ((1 >> (-25590 + 25610)));
                        var_24 = ((((arr_14 [1] [i_1 - 2] [i_5] [i_6]) ? var_2 : 19894)));
                    }
                    /* vectorizable */
                    for (int i_7 = 2; i_7 < 21;i_7 += 1)
                    {
                        arr_25 [i_0] [i_1 - 2] [i_1 - 2] [i_0] [i_0] = (arr_23 [i_0] [i_1 - 1] [i_5] [i_7 - 1]);
                        arr_26 [i_0] [i_1 - 1] [i_0] [i_7 - 2] = 4360;
                    }
                    for (int i_8 = 0; i_8 < 22;i_8 += 1)
                    {
                        var_25 = (1 ? 503933301551219539 : 1);
                        arr_29 [i_0] [1] [i_5] [i_0] [i_0] [0] = var_4;
                    }
                    arr_30 [i_0] [i_0] [i_0] = (5993404125069329675 < -1343104276);
                    arr_31 [i_0] [i_0] [i_5] [5] = var_10;
                    arr_32 [i_0] [1] [i_5] = (i_0 % 2 == 0) ? (((max((~1), (((arr_11 [i_5] [13] [i_1] [8] [i_0] [i_0]) >> (((arr_8 [i_0] [i_1] [i_0] [i_5] [i_1] [i_1]) - 3910617488)))))))) : (((max((~1), (((arr_11 [i_5] [13] [i_1] [8] [i_0] [i_0]) >> (((((arr_8 [i_0] [i_1] [i_0] [i_5] [i_1] [i_1]) - 3910617488)) - 3852510253))))))));
                    var_26 = 1040980987348409993;
                }
                arr_33 [i_0] [i_0] = (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                arr_34 [i_0] = max(73, 1);
                arr_35 [i_0] = (!48);

                /* vectorizable */
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_10 = 3; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_27 += var_8;
                                var_28 = (arr_39 [i_1 + 1] [i_9 + 2] [i_10 - 2] [i_10 + 1]);
                                arr_44 [i_0] [i_1] [i_0] = (~var_3);
                                var_29 = var_7;
                            }
                        }
                    }
                    arr_45 [i_9 + 1] [i_0] [i_0] = (!4294967295);
                }
            }
        }
    }
    #pragma endscop
}
