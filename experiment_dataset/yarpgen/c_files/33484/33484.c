/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33484
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33484 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33484
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_10, var_12));
    var_15 = ((!(((~((1 ? 1073217536 : 1)))))));
    var_16 = (max(var_16, (((((((var_11 + 2147483647) >> (1554483445 - 1554483441)))) ? ((var_9 ? 1 : 1)) : ((max(0, 65533))))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            var_17 = max(1, ((var_3 ? 1 : 18)));
            arr_6 [i_0] [i_0] = 2080374784;
            arr_7 [i_0] = ((((~(939524096 << 1)))) && 65063);
            var_18 = ((((max((((2000489216 ? 1 : var_9))), ((var_10 ? var_5 : 939524096))))) ? (!var_0) : (max(var_7, (((56915 ? 1 : -123)))))));
        }
        var_19 = min((!var_2), ((-((1 ? 124 : var_4)))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 0;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_20 = (--1);
                            var_21 = ((((max(5, (min(1, 0))))) ? (((4294967295 & 2147483647) ? var_8 : 1260074102)) : 23486));
                            arr_16 [i_0] [i_0] [9] [i_0] [i_0] = 35184372088831;
                            var_22 = (((((-((1 ? 5 : 2))))) ? 0 : 18));
                        }
                    }
                }
            }
            arr_17 [i_0] = (min(((-(!-6262856))), (max(-26, 0))));
            var_23 = min(((~((0 ? 1 : 1)))), (((((var_3 ? 0 : 224))) ? (~var_3) : ((0 ? -708665557 : 3)))));
        }
        for (int i_6 = 3; i_6 < 20;i_6 += 1) /* same iter space */
        {
            var_24 = (min(var_6, (min(-104, var_10))));
            var_25 |= (min(-32, 18184));
        }
        /* vectorizable */
        for (int i_7 = 3; i_7 < 20;i_7 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_8 = 3; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    {
                        arr_29 [i_0 + 1] [i_9] [i_9] [2] &= ((5 ? ((var_12 ? 0 : 17842)) : ((-2147473405 ? -288974861 : 2147483647))));
                        var_26 = (3328385576 <= var_8);
                    }
                }
            }

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                var_27 = 8621;
                arr_33 [i_0] [i_7] [i_0] = ((var_10 - (((var_13 ? var_1 : -1815876635)))));
            }
            for (int i_11 = 0; i_11 < 21;i_11 += 1)
            {
                var_28 = ((~(-10 && 42050)));
                arr_36 [i_0] [i_0] [i_0] [i_0] = (~var_12);
                var_29 = (~-16);
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 18;i_12 += 1)
                {
                    for (int i_13 = 0; i_13 < 21;i_13 += 1)
                    {
                        {
                            arr_45 [i_0] [i_0] [i_0] [i_12] [i_13] = 6;
                            var_30 = 2147483647;
                            var_31 = (((((3328385576 ? 3 : 2147483647))) ? ((53187 ? -870876427 : var_1)) : ((-96 ? var_1 : var_11))));
                            var_32 = (min(var_32, (((-1757021319145264823 ? (((-111 ? 65535 : var_2))) : (11497 - 4294967284))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
