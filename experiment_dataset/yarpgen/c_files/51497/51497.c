/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51497
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_20 = (max(((((min(var_13, 192))) ? (((arr_1 [i_0] [i_0]) & (arr_0 [i_0]))) : var_9)), (((((max(64, var_4))) + var_16)))));
        var_21 *= ((((max(132, ((32 ? 64 : -13565))))) ? var_8 : 1));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_22 = (min(var_22, ((((max((((2147483648 ? 62 : 64))), (max((arr_2 [i_1]), var_8))))) ? (-3 + 18328802030142344218) : var_19))));

        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                var_23 &= (max(var_13, (max(var_10, ((var_2 ? var_10 : 81))))));
                var_24 = ((var_17 ? (-6906 < 20389) : ((-9223372036854775798 ? 2223949957 : 9223372036854775797))));
            }
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_25 = (max(((((min(-19885, 11923))) ^ -102)), (((!(var_13 && 81))))));
                            var_26 = var_18;
                            var_27 &= var_16;
                        }
                    }
                }

                /* vectorizable */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    var_28 = (((var_16 < 32767) ? 27 : (71 - 2661728250)));
                    var_29 = var_2;
                }
                var_30 = 9223372036854775798;
            }
            var_31 &= (arr_7 [i_1] [i_1] [i_1]);
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 17;i_10 += 1)
                {
                    {
                        var_32 = (min(var_32, 1633239031));

                        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            var_33 = ((-103 ? var_2 : (arr_13 [i_1] [i_10 + 2] [i_8])));
                            var_34 = (~9223372036854775767);
                            var_35 = (!110);
                            var_36 ^= 127;
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_37 = (var_17 + var_8);
                            var_38 = (((arr_4 [i_10 - 1] [i_8]) ? var_2 : (arr_4 [i_10 - 1] [i_8])));
                        }
                        var_39 = (arr_12 [i_1] [i_8] [i_9] [i_10 - 2]);
                    }
                }
            }

            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {

                for (int i_14 = 3; i_14 < 17;i_14 += 1)
                {
                    var_40 = (((arr_18 [i_1] [i_8] [i_14 - 1] [i_14] [i_14]) ? 0 : (9223372036854775773 >= 239)));
                    var_41 &= (arr_11 [i_1] [i_8] [i_13] [i_13]);
                }
                var_42 ^= (((arr_8 [i_1] [i_8] [i_8]) <= (arr_24 [i_1] [i_8] [i_13] [i_13] [i_13])));
                var_43 = var_3;
                var_44 = 127;
            }
            var_45 ^= (((arr_3 [i_8]) ? -9223372036854775798 : (((~(arr_34 [i_1]))))));
        }
        var_46 = 507116043701687513;
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        for (int i_16 = 1; i_16 < 14;i_16 += 1)
        {
            {
                var_47 |= (min(29000, (((!((((arr_40 [i_15] [i_16] [i_15]) ? var_0 : 10))))))));
                var_48 = (arr_3 [i_16]);
            }
        }
    }
    #pragma endscop
}
