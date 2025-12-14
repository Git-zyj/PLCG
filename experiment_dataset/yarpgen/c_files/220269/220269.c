/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_7 [4] &= ((-(-1216502767 - -6726467009533535590)));
            arr_8 [i_1] [i_1] = (((var_15 >> (var_19 + 23))));
            var_21 = var_6;
            arr_9 [i_1] = (((var_17 % var_1) != (~var_1)));
        }

        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            var_22 = ((!(!var_16)));
            var_23 = (min(var_23, -2305843008676823040));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 11;i_4 += 1)
                {
                    {
                        var_24 |= ((!(var_10 < var_9)));
                        arr_20 [i_0] [i_3] [8] [i_0] = var_1;
                        var_25 = ((!(!var_6)));
                    }
                }
            }

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                arr_24 [i_0] [i_2 - 2] [i_5] = ((var_11 >> (var_9 - 12437780273155513316)));
                arr_25 [i_2] = (((~var_1) | var_16));
                var_26 = (min(var_26, (((~(var_6 | var_19))))));
            }
            for (int i_6 = 0; i_6 < 12;i_6 += 1)
            {
                arr_29 [i_6] = -var_12;
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 9;i_8 += 1)
                    {
                        {
                            var_27 = (!-576390383559245824);
                            var_28 = (max(var_28, (((var_15 >> (var_4 - 42645))))));
                        }
                    }
                }

                for (int i_9 = 0; i_9 < 12;i_9 += 1) /* same iter space */
                {
                    arr_36 [i_6] [i_6] [i_6] [i_6] = (~-var_15);
                    var_29 = var_17;
                    var_30 -= var_17;
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1) /* same iter space */
                {
                    var_31 = var_14;
                    var_32 = 376282408583133585;
                }
            }
        }

        for (int i_11 = 4; i_11 < 11;i_11 += 1)
        {
            var_33 = ((var_2 % (var_10 != var_9)));
            /* LoopNest 2 */
            for (int i_12 = 2; i_12 < 8;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 12;i_13 += 1)
                {
                    {
                        var_34 += (~var_19);
                        arr_47 [i_0] [i_11] [i_12 + 1] [i_12 + 1] = (!(!var_13));
                        var_35 += 10;
                    }
                }
            }
            arr_48 [i_0] [i_0] = -576390383559245824;
        }
    }
    /* vectorizable */
    for (int i_14 = 1; i_14 < 1;i_14 += 1) /* same iter space */
    {
        var_36 &= var_17;
        var_37 = var_4;
        arr_52 [i_14] &= ((!(!-101)));
        arr_53 [i_14] = (!var_12);
        var_38 = -var_16;
    }
    #pragma endscop
}
