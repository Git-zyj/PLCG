/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234466
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = ((64020746 % (((var_5 ? var_0 : 241)))));
        arr_3 [i_0] |= (arr_0 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {

                        for (int i_5 = 1; i_5 < 15;i_5 += 1)
                        {
                            var_12 -= -32;
                            var_13 = var_10;
                            arr_19 [i_5] [i_2] = var_1;
                            var_14 = 949144509;
                        }
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            arr_23 [i_6] [i_4] [i_3 + 1] [i_2] [14] [i_1] [i_1] = 4230946566;
                            arr_24 [i_3] [i_2] [i_6] [i_2] [i_6] [i_2] = 65523;
                            arr_25 [i_1] [i_2] [i_2] [i_2] [0] [0] [i_2] = (((arr_22 [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3] [i_3]) ? (arr_11 [i_3 + 1] [15]) : (arr_11 [i_3 - 1] [i_2])));
                            arr_26 [i_2] = 949144505;
                        }
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            var_15 = (max(var_15, (((~(arr_20 [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3]))))));
                            arr_31 [4] [i_2] [i_2] [i_2] = var_7;
                            arr_32 [i_2] [9] [i_2] = (((arr_20 [i_1] [i_3 - 2] [i_1] [i_4] [i_4]) & 3345822778));
                        }
                        arr_33 [i_1] [10] [i_2] [i_2] [i_2] = 31;
                    }
                }
            }
            arr_34 [i_2] = -22979;
            /* LoopNest 2 */
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                for (int i_9 = 1; i_9 < 15;i_9 += 1)
                {
                    {
                        arr_41 [i_2] [i_9 + 1] = ((22987 ? var_6 : (((arr_27 [i_2] [i_1] [i_2] [i_1] [i_2]) ? (arr_40 [i_2] [i_9]) : var_8))));
                        var_16 ^= (((arr_12 [i_1] [i_2] [i_1]) || (949144501 || var_0)));
                    }
                }
            }
        }
        for (int i_10 = 2; i_10 < 15;i_10 += 1)
        {
            var_17 = 4230946578;
            arr_44 [i_1] [i_10] = max(((max(949144497, var_7))), ((min((arr_0 [i_1] [i_10]), (max(32759, (arr_18 [i_1] [i_1] [i_1] [i_10] [7])))))));
        }
        for (int i_11 = 2; i_11 < 16;i_11 += 1)
        {
            var_18 = (arr_28 [i_1] [i_1] [i_11] [i_1] [i_11] [i_1] [i_1]);
            var_19 *= (arr_48 [i_1]);
        }

        /* vectorizable */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            var_20 += (((((3 ? var_2 : 32748))) ? (arr_12 [i_12] [i_12] [i_1]) : (3345822777 == -22974)));
            var_21 = (min(var_21, (arr_17 [i_12] [i_12] [1] [i_1] [i_1])));
        }
        arr_53 [i_1] = ((~((-(arr_51 [i_1] [i_1])))));
    }
    for (int i_13 = 0; i_13 < 17;i_13 += 1) /* same iter space */
    {
        arr_57 [i_13] = (max(-93, (max(3644927058, var_9))));
        /* LoopNest 2 */
        for (int i_14 = 3; i_14 < 16;i_14 += 1)
        {
            for (int i_15 = 0; i_15 < 17;i_15 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_16 = 2; i_16 < 15;i_16 += 1)
                    {
                        for (int i_17 = 2; i_17 < 16;i_17 += 1)
                        {
                            {
                                var_22 = 21;
                                arr_66 [i_15] [i_14 + 1] [i_15] [i_14] [i_17] [i_14] [i_16 + 1] = (max((arr_50 [i_13] [i_14 - 1]), ((-(min(var_4, -7354449481862808830))))));
                            }
                        }
                    }
                    arr_67 [i_14] [i_14 - 3] [i_14] [i_14] = (i_14 % 2 == zero) ? ((((((arr_12 [i_15] [i_15] [i_14]) + 2147483647)) << ((((~((78 ? (arr_61 [i_15] [i_14 - 3] [i_13]) : (arr_58 [i_14] [i_14] [i_14]))))) - 4294949647))))) : ((((((((arr_12 [i_15] [i_15] [i_14]) - 2147483647)) + 2147483647)) << ((((~((78 ? (arr_61 [i_15] [i_14 - 3] [i_13]) : (arr_58 [i_14] [i_14] [i_14]))))) - 4294949647)))));
                    var_23 = ((((((((arr_52 [i_13] [i_13] [i_13]) + 32729)) == (!var_1)))) == ((-28854 ^ ((max(-28856, (arr_14 [i_15]))))))));
                    arr_68 [i_14] = (min(-32754, 14));
                }
            }
        }
    }
    for (int i_18 = 0; i_18 < 11;i_18 += 1)
    {
        var_24 = (min(var_24, ((((max(1345219769, (arr_40 [10] [i_18]))) >= (var_5 && 238))))));

        for (int i_19 = 0; i_19 < 11;i_19 += 1)
        {
            arr_74 [i_18] = (min((((((arr_5 [i_18] [i_19]) & (arr_12 [i_18] [4] [i_18]))) ^ ((min((arr_17 [i_18] [i_19] [i_19] [i_18] [11]), var_5))))), (4294967278 <= 7406)));
            var_25 = (arr_10 [i_19] [i_18]);
            var_26 = (max(var_26, ((max((((!var_10) || (arr_35 [i_19]))), ((!((min((arr_27 [i_18] [i_18] [14] [i_18] [i_19]), 24))))))))));
        }
        /* vectorizable */
        for (int i_20 = 1; i_20 < 10;i_20 += 1)
        {
            var_27 *= 40;
            var_28 = ((-1 ^ (arr_49 [2] [4] [4])));
        }
    }

    for (int i_21 = 0; i_21 < 21;i_21 += 1)
    {
        /* LoopNest 2 */
        for (int i_22 = 1; i_22 < 18;i_22 += 1)
        {
            for (int i_23 = 1; i_23 < 18;i_23 += 1)
            {
                {
                    arr_88 [i_21] [i_21] = (max(9223372036854775788, var_0));
                    var_29 = (min(var_29, (arr_86 [i_21] [i_22] [i_22] [6])));
                    arr_89 [i_21] [i_22] [i_22] [i_23] = 58133;
                    var_30 -= (arr_79 [i_22]);
                }
            }
        }
        var_31 = (max(var_31, ((max((((+(min((arr_87 [i_21] [12]), (arr_81 [20] [20] [20])))))), (arr_86 [i_21] [i_21] [4] [20]))))));
    }
    var_32 = var_9;
    #pragma endscop
}
