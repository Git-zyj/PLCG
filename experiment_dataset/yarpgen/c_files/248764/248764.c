/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = -5083863609358820546;
        var_12 = (max(var_12, 4095));
        arr_2 [12] = (1 ? ((((((var_1 != (arr_0 [3])))) + (((arr_0 [i_0]) ? -1 : -1740))))) : ((var_3 ? (arr_1 [i_0]) : (arr_0 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {

            /* vectorizable */
            for (int i_3 = 1; i_3 < 10;i_3 += 1)
            {
                arr_11 [i_2] [i_1] = (arr_7 [i_1] [i_3 + 1] [i_3]);
                var_13 = (((~9163) <= 5083863609358820563));
                var_14 ^= (((arr_1 [i_1]) ? 26488 : 127));
                arr_12 [1] [1] [i_1] = (arr_3 [i_1] [i_3 + 1]);
            }
            for (int i_4 = 3; i_4 < 10;i_4 += 1)
            {
                arr_15 [i_1] [i_2] [i_1] = ((+(max((((arr_7 [i_1] [i_2] [i_4 - 1]) ? 17505265 : var_2)), ((839653590 ? (arr_13 [i_1] [i_1] [i_1] [i_1]) : var_6))))));

                for (int i_5 = 1; i_5 < 9;i_5 += 1) /* same iter space */
                {
                    arr_19 [i_1] [i_2] [i_1] [i_5] [i_2] = (~var_6);
                    var_15 = (min(var_15, (arr_10 [2] [i_1] [2])));
                    arr_20 [i_1] [i_2] = -1;
                }
                for (int i_6 = 1; i_6 < 9;i_6 += 1) /* same iter space */
                {
                    var_16 = 5194297652803562322;
                    arr_23 [10] [10] [i_6] [8] [i_6] [i_6 + 1] |= (arr_17 [2] [i_2] [i_2] [0] [i_2]);
                }
            }
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                arr_26 [i_1] = (min(((((min(25354, 1))) ? (max(1833470947200682805, (arr_4 [1] [i_1]))) : (arr_3 [i_1] [i_2]))), (((4343802971352479213 < ((max(-32755, -10))))))));
                var_17 = (12106302830511229874 + 839653583);
            }
            var_18 = (((5194297652803562325 ? 0 : -4)));
            var_19 = ((((((min(5194297652803562322, 19)) * 1950636449))) ? 8784797270740340419 : ((max((~65535), (((arr_17 [i_2] [i_2] [i_2] [2] [i_2]) | (-9223372036854775807 - 1))))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_20 = (arr_6 [i_1] [i_1] [i_1]);
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 11;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 11;i_11 += 1) /* same iter space */
                        {
                            var_21 = -54;
                            var_22 = -1785046788510496586;
                        }
                        for (int i_12 = 0; i_12 < 11;i_12 += 1) /* same iter space */
                        {
                            var_23 = (max(var_23, ((((arr_21 [i_12] [i_10] [2] [i_8] [i_1]) ? -8333259533435169641 : (arr_34 [i_1] [i_8] [i_1]))))));
                            arr_41 [i_1] = -var_0;
                        }
                        var_24 |= (!33);
                        var_25 = (-9223372036854775807 - 1);
                    }
                }
            }
        }

        for (int i_13 = 1; i_13 < 8;i_13 += 1) /* same iter space */
        {
            arr_44 [i_1] [10] = (-9223372036854775807 - 1);
            arr_45 [i_13] [i_1] [i_13] = (!-97);
        }
        for (int i_14 = 1; i_14 < 8;i_14 += 1) /* same iter space */
        {
            var_26 = ((!(((var_1 ^ (!8333259533435169620))))));
            arr_50 [7] [i_1] [7] = (i_1 % 2 == zero) ? (((((((arr_9 [i_1] [i_1]) >> (((arr_46 [i_1]) + 18860))))) ? 1 : ((-54 ? 3766068069 : (-9223372036854775807 - 1)))))) : (((((((arr_9 [i_1] [i_1]) >> (((((arr_46 [i_1]) + 18860)) - 33647))))) ? 1 : ((-54 ? 3766068069 : (-9223372036854775807 - 1))))));
        }
    }
    var_27 = 32759;
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 9;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 10;i_16 += 1)
        {
            {
                arr_56 [i_15] &= 0;
                arr_57 [i_15] [i_15 + 1] [i_15] = ((((((~var_0) * -1))) ? 0 : var_4));
            }
        }
    }
    #pragma endscop
}
