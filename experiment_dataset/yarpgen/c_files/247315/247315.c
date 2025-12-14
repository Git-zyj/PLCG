/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_15 |= var_3;
            var_16 = (-9223372036854775802 < var_12);
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = var_2;
                        var_18 = (min(var_18, (~var_10)));
                        var_19 = (!-7);
                        var_20 = var_8;
                        arr_9 [i_3] [i_1] [i_3] [i_2] = ((var_2 ? var_8 : 1));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 19;i_4 += 1) /* same iter space */
        {

            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                var_21 = ((~(min(((min(var_2, var_14))), (var_1 | 1)))));
                var_22 -= (max((var_11 % 1), ((~(1 || 9)))));
                arr_14 [i_0] [16] [i_5] = (var_5 > -25634);
            }
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_23 = (max(var_23, (((-3000859482 ? -var_12 : (((min(var_10, var_12)))))))));
                var_24 = (max((min((max(var_12, 0)), var_2)), (var_3 / var_12)));
                var_25 = (((-1 / 524287) ^ 232));
            }
            arr_17 [i_4] [i_0 + 2] = ((-(min(-54, 1294107814))));
        }
        for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
        {
            var_26 &= ((max(1294107816, (!var_7))));
            var_27 = (max((max(var_11, var_12)), -22));
            var_28 = (min(((15 ^ ((var_11 ? var_1 : var_4)))), ((min(var_9, (max(var_6, var_4)))))));
            arr_20 [i_7] = (min(((15 ? 1 : 110)), ((var_0 ? (~var_3) : var_2))));
        }
        for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 2; i_10 < 18;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_29 += 1;
                            var_30 = (((var_5 >> 1) & ((max(19, var_13)))));
                            arr_30 [i_0] [i_8] [i_9] [i_10] [i_11] = ((min(127, var_11)));
                        }
                    }
                }
            }
            var_31 = (min((min((!var_1), (!var_12))), (var_13 && var_0)));
        }
        /* LoopNest 2 */
        for (int i_12 = 1; i_12 < 1;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 19;i_13 += 1)
            {
                {
                    var_32 = 3;

                    for (int i_14 = 0; i_14 < 19;i_14 += 1)
                    {
                        arr_40 [i_0] [i_12] [i_13] [i_12] = (-(min(var_3, 2232825640)));
                        arr_41 [i_14] = (~(min(((var_11 ? -101 : -1054)), ((185 ? var_9 : -7)))));
                    }
                    for (int i_15 = 1; i_15 < 16;i_15 += 1) /* same iter space */
                    {
                        arr_44 [1] [i_12] [i_12] [i_13] [i_12] [1] = (max((((~(((var_2 + 2147483647) << (9633326783308792003 - 9633326783308792003)))))), ((var_4 ? ((1294107804 >> (9633326783308791986 - 9633326783308791973))) : (!var_12)))));
                        var_33 = (-1054 ? (var_2 != var_11) : (((var_3 + 2147483647) << (953 - 953))));
                        var_34 = (((1 < 8813417290400759657) ? ((+(((-9223372036854775794 + 9223372036854775807) << (8813417290400759612 - 8813417290400759612))))) : 1));
                        var_35 -= 2548207224171946385;
                    }
                    for (int i_16 = 1; i_16 < 16;i_16 += 1) /* same iter space */
                    {

                        for (int i_17 = 0; i_17 < 19;i_17 += 1)
                        {
                            var_36 -= (max(97, (9633326783308791993 % 70)));
                            var_37 = (((((min(-2143864622, (min(0, var_12)))) + 2147483647)) << ((((max(var_0, var_7))) ? (!34628) : var_14))));
                        }
                        /* vectorizable */
                        for (int i_18 = 0; i_18 < 19;i_18 += 1)
                        {
                            arr_52 [i_16] [3] [i_13] [9] [i_18] = ((!(-1072 == 9223372036854775802)));
                            var_38 -= ((var_5 ? var_7 : 2547117220110215291));
                            arr_53 [i_16] [i_16] [i_13] [i_12 - 1] [i_16] = (65531 || var_14);
                            var_39 = var_7;
                        }
                        arr_54 [i_16] = 70;
                        var_40 = ((var_2 == ((max(-1, 65531)))));
                        arr_55 [i_0] [i_0 + 2] [i_0 + 1] [i_0 - 1] [i_16] [i_0 + 2] = ((!((!(((var_0 ? -1061 : var_7)))))));

                        for (int i_19 = 0; i_19 < 19;i_19 += 1)
                        {
                            arr_58 [i_0] [i_12] [i_16] [i_0] [i_19] = var_11;
                            var_41 = (max(2063, ((min(1071, 30907)))));
                        }
                    }
                }
            }
        }
    }
    var_42 = (((!var_9) % (min(var_11, -424))));
    var_43 += ((!(((8813417290400759591 << (409 - 385))))));
    #pragma endscop
}
