/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
                            {
                                var_16 = (min(var_16, (arr_5 [i_0] [1] [i_0])));
                                var_17 = max(-var_1, (arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 + 2] [i_3]));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
                            {
                                var_18 += 251;
                                var_19 = 34977;
                                arr_15 [i_0] [i_1] [i_1] [11] [i_3] [11] = ((var_8 >> (9223372036854775795 - 9223372036854775793)));
                                var_20 ^= ((-21075 ? -7073159412118872795 : (arr_2 [i_3 + 1])));
                            }
                            for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
                            {
                                var_21 = 60092;
                                var_22 = (min(var_22, (((var_14 ? 65535 : (((var_9 % var_2) ? ((max(var_1, (arr_6 [10] [10])))) : (arr_17 [i_3 + 2] [i_3 - 1]))))))));
                            }
                            var_23 = (min(var_23, (arr_11 [i_3 + 2] [i_3 + 1] [i_3 + 1])));
                        }
                    }
                }
                var_24 = (((!var_6) || ((!(arr_4 [i_1])))));
            }
        }
    }
    var_25 = var_15;
    var_26 = ((((var_9 ? var_10 : var_8)) & var_6));
    #pragma endscop
}
