/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((max(9216550237790907160, ((max((var_4 >= -310381809), (max((arr_0 [i_2 + 1]), (arr_0 [1])))))))))));
                    var_14 = (min(var_14, var_10));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        var_15 = ((!(!var_6)));
                        var_16 = (~(arr_7 [6] [6] [i_2 - 1] [i_2 + 1] [i_2 + 1]));
                    }

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_17 = ((-(arr_6 [i_0] [i_0] [i_0] [i_0])));
                        var_18 = (min(var_18, 12168038560456031328));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_19 = ((var_6 + ((var_9 % (arr_10 [i_0] [i_0] [i_0])))));
                        var_20 = var_5;
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_21 = ((2723610773 / (max((-7856590634784389176 / 60308), (arr_4 [i_0] [i_6])))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18;i_7 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] = (((~var_6) ? var_8 : -var_2));
                            var_22 = (arr_18 [i_0] [i_1] [i_0] [i_0] [1] [1]);
                            var_23 = (((arr_2 [i_0]) >= ((((!(arr_7 [i_0] [i_1] [i_0] [i_1] [i_7])))))));
                            arr_21 [i_0] [i_0] [4] [i_6] [i_6] = ((-(arr_8 [i_0] [i_1] [i_2] [i_6] [i_6] [i_7])));
                            var_24 = (arr_0 [i_1]);
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_25 = (max((((!((max(var_1, var_7)))))), (((((arr_17 [i_0] [i_1] [i_0] [i_1] [i_0]) <= 96)) ? ((min(var_2, var_7))) : ((-(arr_14 [i_0] [i_1] [i_0] [i_2 + 2] [i_8])))))));
                            var_26 = ((~(arr_2 [i_0])));
                            var_27 = ((-(-127 - 1)));
                            var_28 = (max(var_28, (((-(((var_4 == var_4) + (max(2044, 5815862851203612867)))))))));
                        }
                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            var_29 = ((-(min((var_6 && var_3), var_7))));
                            var_30 = 15;
                            arr_27 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_0] = ((!((!((max(var_0, var_4)))))));
                        }
                        for (int i_10 = 0; i_10 < 18;i_10 += 1)
                        {
                            var_31 = (max(1227942148, 4294965252));
                            var_32 = max(2044, -4);
                            var_33 = ((-(max(var_1, var_11))));
                            var_34 = (arr_29 [4] [i_1] [i_2 - 2] [i_6] [i_10]);
                        }
                    }
                }
            }
        }
    }
    var_35 = var_6;
    var_36 = ((var_4 << (((1 + 4294965252) - 4294965222))));
    #pragma endscop
}
