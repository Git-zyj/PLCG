/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19791
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_10;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] = ((~((~((~(arr_8 [3] [i_1] [3] [3] [i_3] [17])))))));
                                var_15 = (--var_0);
                                var_16 = (min(var_16, (((-((-((-(arr_0 [i_2]))))))))));
                            }
                        }
                    }
                    arr_14 [i_2] [i_1] [i_2] [i_0 + 1] &= ((~(arr_6 [i_0 + 1] [i_1] [i_2] [i_2])));

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_17 = (max(var_17, (((((!(!var_6))))))));
                        var_18 = ((!((!(arr_4 [i_5])))));
                    }
                    for (int i_6 = 1; i_6 < 19;i_6 += 1)
                    {

                        for (int i_7 = 4; i_7 < 20;i_7 += 1)
                        {
                            var_19 = ((((!(!var_2)))));
                            arr_23 [i_0] [i_1] [i_2] [i_2] [i_0] = ((((!(~-16)))));
                            var_20 = ((((!(!90)))));
                            arr_24 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] = ((~(!-16)));
                        }
                        arr_25 [i_0] [i_0] [i_0] = (!var_13);
                    }
                }
                var_21 = (max(var_21, (((((!(arr_1 [i_1]))))))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        {

                            for (int i_10 = 1; i_10 < 20;i_10 += 1)
                            {
                                var_22 = (max(var_22, (!var_5)));
                                arr_34 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] [1] = ((~((-(!var_5)))));
                                var_23 = ((!(!127)));
                                var_24 = (!0);
                                arr_35 [i_0 - 1] [i_0] [i_8] [i_9] [i_10 - 1] = ((-(!-68)));
                            }
                            var_25 = (min(var_25, 8928867799228852523));
                        }
                    }
                }
                arr_36 [i_0] [i_0] [i_1] = ((-(((!(~var_12))))));
            }
        }
    }
    #pragma endscop
}
