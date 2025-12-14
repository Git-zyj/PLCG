/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231350
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231350 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231350
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= -var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] = (arr_3 [i_2]);
                                arr_14 [i_2] [i_1 - 3] [11] [i_3] [i_4] |= min((!var_13), (min(-1, (arr_9 [i_0] [i_1] [i_2] [i_4 - 2]))));
                                var_20 -= ((((min(((var_4 ? 543185541 : (arr_10 [i_1] [i_1] [i_1] [i_1]))), (arr_3 [i_3])))) * ((var_4 ? var_7 : (arr_9 [i_1 - 4] [i_3] [i_2] [i_1 - 4])))));
                                var_21 -= var_11;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_17 [i_0] [i_0] [i_0] = var_5;
                    var_22 ^= (arr_5 [i_5] [i_5] [i_5]);
                }
                for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_23 = (min(var_23, 4032));

                        for (int i_8 = 1; i_8 < 1;i_8 += 1)
                        {
                            var_24 += var_8;
                            arr_27 [i_0] [i_0] [i_1 + 2] [i_6] [i_7] [i_8 - 1] = (!var_15);
                            var_25 |= (-27159 != 152);
                        }
                        var_26 ^= ((!(arr_11 [i_7] [i_6 - 2] [i_1 - 1] [i_0] [i_0])));
                    }
                    /* vectorizable */
                    for (int i_9 = 3; i_9 < 19;i_9 += 1)
                    {
                        var_27 ^= ((!(!16381695218997505752)));
                        var_28 = (138 <= var_15);
                        var_29 = -2147483635;
                    }
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        arr_32 [18] [i_0] [i_6 - 1] [i_10] = (((arr_30 [i_0] [i_1] [i_1 + 3] [i_6] [i_6 - 2] [i_6]) == (((var_10 ? (arr_30 [i_1] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1] [i_1 - 3]) : 69)))));
                        var_30 = (min(var_30, ((max(1036386557, 4294967295)))));
                        var_31 = ((+((((var_4 && var_13) != (((((arr_9 [i_0] [i_1] [i_6 - 2] [i_10]) + 9223372036854775807)) << (103 - 103))))))));
                        var_32 = (min(var_32, -24));
                    }
                    for (int i_11 = 3; i_11 < 19;i_11 += 1)
                    {

                        /* vectorizable */
                        for (int i_12 = 1; i_12 < 19;i_12 += 1)
                        {
                            var_33 = (((arr_16 [i_6 - 1] [i_11 - 2] [i_12 - 1]) == var_12));
                            var_34 = ((arr_2 [i_0] [i_11]) ? var_11 : var_4);
                            arr_40 [i_6] [i_0] [i_1 + 1] [i_6 + 1] [i_11] [i_11 - 2] [i_12 + 1] &= 152;
                        }
                        for (int i_13 = 1; i_13 < 17;i_13 += 1)
                        {
                            arr_43 [i_0] [i_1 + 1] [i_11] [i_1 + 1] [5] = (((var_15 ? (((min(var_2, 253)))) : ((-(arr_22 [i_0] [i_1] [i_6] [i_11]))))));
                            arr_44 [i_0] [i_0] [i_0] [i_6] [i_6 + 1] [i_11] [i_6] = ((-2147483635 ? ((((((((arr_8 [i_6] [i_6]) ? var_6 : 19))) || ((max(1157527377, var_13))))))) : var_9));
                            var_35 ^= ((+(((var_0 != var_16) ? (arr_2 [i_1 - 1] [i_11]) : ((-32 ? var_3 : -4376154920614260212))))));
                        }
                        var_36 = (min((arr_39 [i_0] [i_1] [i_6] [i_11]), 1005154117));
                    }
                    arr_45 [i_6] &= (max((1 == 2297275027), (max((max(132, (arr_8 [i_1] [i_6]))), (((var_1 ? 1921538051 : 4294967280)))))));
                }
                /* vectorizable */
                for (int i_14 = 2; i_14 < 19;i_14 += 1) /* same iter space */
                {
                    var_37 = 16043;
                    var_38 = (max(var_38, ((((208 ? 3289813163 : (arr_2 [i_0] [8])))))));
                }
            }
        }
    }
    var_39 = (max(var_12, var_7));
    var_40 = (max(var_40, 9223372036854775789));
    var_41 ^= var_2;
    #pragma endscop
}
