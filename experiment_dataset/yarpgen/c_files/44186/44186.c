/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 20;i_4 += 1)
                            {
                                var_13 = (arr_10 [1] [i_1] [i_1] [i_1]);
                                var_14 = (max((((arr_4 [i_0]) ? (min(6253770804117927763, 3)) : 30)), var_12));
                                arr_15 [2] [i_3] [0] [i_2] [2] [i_1] [2] &= var_5;
                            }
                            for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
                            {
                                var_15 = (arr_10 [i_3 + 2] [9] [i_3] [i_1]);
                                arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] = (arr_0 [13] [i_5]);
                            }
                            for (int i_6 = 1; i_6 < 23;i_6 += 1) /* same iter space */
                            {
                                var_16 = var_3;
                                var_17 = (((arr_8 [i_1] [i_1] [1]) > (arr_8 [i_1] [i_3] [i_1])));
                                arr_21 [i_1] [17] [i_2] = var_11;
                                var_18 -= ((12 ? 18446744073709551615 : (((min(-1926, -101))))));
                                var_19 = ((18446744073709551611 < (110 + var_8)));
                            }
                            var_20 = (((((((((var_8 == (arr_4 [i_0]))))) + (arr_10 [i_3 + 1] [i_1] [i_2] [i_3])))) ? ((((~-3101) ? 241 : 1925))) : ((3 ^ (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0])))));

                            for (int i_7 = 1; i_7 < 1;i_7 += 1)
                            {
                                var_21 = (arr_8 [i_1] [i_1] [i_1]);
                                var_22 = ((15772743765651350273 << (18446744073709551612 - 18446744073709551607)));
                                var_23 = ((!((min(((((arr_6 [i_1] [i_3]) > var_11))), (((((arr_20 [i_0] [i_1] [i_1] [i_3 + 2] [i_7 - 1]) + 2147483647)) >> (((-32767 - 1) + 32785)))))))));
                            }
                        }
                    }
                }
                var_24 = min((((!(!116)))), var_0);
                var_25 = var_12;
            }
        }
    }
    var_26 = (((var_6 >> (var_2 - 121))));
    #pragma endscop
}
