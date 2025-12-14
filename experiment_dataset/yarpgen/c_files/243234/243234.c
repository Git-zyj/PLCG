/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243234
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243234 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243234
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_6;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_6 + 2147483647) >> (((arr_1 [i_0]) + 70)))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (arr_3 [i_1]);
                    arr_9 [i_0] [i_0] [i_2] [i_2 - 1] = (((144044819331678208 - -144044819331678208) ? -144044819331678208 : 0));
                    var_20 = (max(var_20, var_1));
                    arr_10 [i_2] [i_1] [i_2] = var_10;
                }
            }
        }
        var_21 = (max(var_21, (0 % 541096256)));
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        arr_14 [i_3] = ((((((arr_4 [i_3 + 1] [i_3 + 1]) < var_9))) <= var_9));
        var_22 = (((((var_15 - 541096264) + 541096264)) >> (var_1 - 26828)));
        arr_15 [i_3] [i_3 + 1] = (((((0 ? (((var_16 ? (arr_0 [i_3 + 1]) : var_17))) : (((arr_11 [i_3]) * 0))))) ? ((max(192, (var_8 < 78254998)))) : (((((((arr_5 [i_3 + 1] [i_3] [i_3 + 1]) >= 3783501545204574735))) > 0)))));

        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_23 = (max(var_23, var_16));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 11;i_6 += 1)
                {
                    {
                        arr_24 [i_5] [i_4] [i_5] [i_3] [i_3] = (((((max((max(65535, (arr_12 [i_6 + 1] [i_4]))), ((((arr_18 [i_3 + 1] [i_3] [i_3]) >= 1))))))) + (max(var_1, ((min(var_17, (arr_4 [i_3] [i_5]))))))));
                        var_24 = (min(var_24, var_16));
                    }
                }
            }
            var_25 = (min(var_25, (((((((arr_4 [i_3 + 1] [i_3 + 1]) && (arr_19 [i_3 + 1] [i_4] [i_4])))) >> (((arr_4 [i_4] [i_4]) + 1972965718)))))));
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 12;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 11;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 12;i_9 += 1)
                    {
                        {
                            var_26 |= var_7;
                            var_27 = (min((((((var_9 ? 3975593071 : var_5))) ? 18016080948412980999 : var_12)), 2239300633220430632));
                        }
                    }
                }
            }
            var_28 = (((arr_21 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) << (((((((arr_21 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]) ? (arr_4 [i_3 + 1] [i_3 + 1]) : (arr_21 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1]))) + 1972965734)) - 26))));
        }
        /* LoopNest 3 */
        for (int i_10 = 3; i_10 < 8;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 12;i_11 += 1)
            {
                for (int i_12 = 3; i_12 < 9;i_12 += 1)
                {
                    {
                        var_29 = (max(((((arr_5 [i_3] [i_10] [i_11]) & 4294967295))), ((((var_14 + var_5) || ((min(0, 16777215))))))));
                        var_30 = (max(var_30, (((((-(min(var_11, (arr_8 [i_3] [i_3] [i_11] [i_12]))))) + (var_13 == var_9))))));

                        /* vectorizable */
                        for (int i_13 = 2; i_13 < 11;i_13 += 1)
                        {
                            var_31 = ((-(arr_43 [i_12 - 1])));
                            var_32 = (arr_46 [i_13 - 2] [i_13 + 1] [i_13 + 1] [i_13] [i_13 - 1] [i_13 - 1]);
                            var_33 = ((65532 ? -123 : ((1 >> (144044819331678208 - 144044819331678194)))));
                            var_34 &= ((-(!16207443440489120983)));
                        }
                        var_35 = (max(var_35, ((min(955993672, 1)))));
                    }
                }
            }
        }
    }
    for (int i_14 = 1; i_14 < 18;i_14 += 1)
    {
        var_36 = ((!((max(((((arr_4 [i_14 + 1] [i_14 - 1]) || 1))), ((1 ? 152493103 : 18446744073709551610)))))));
        arr_49 [i_14] [i_14 + 1] |= (max(var_10, (((~((var_0 ? var_12 : 1777598615)))))));
    }
    #pragma endscop
}
