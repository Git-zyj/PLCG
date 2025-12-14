/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((-18 ? 4 : 3535941039));
    var_16 = (((min(var_10, ((var_10 ? var_9 : -2147483637)))) | ((((min(2302111127, -5688827129026936819))) ? var_8 : ((16862781222982829642 ? var_11 : var_9))))));
    var_17 = 18446744073709551594;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] [i_4] = (~((~(arr_9 [i_3] [i_0 + 2]))));
                                arr_15 [i_0] [10] [i_0] [i_3] [i_3] = var_10;
                                arr_16 [i_0] [i_0 + 2] [i_0] [i_0] [i_0 + 2] = ((((min(-2005436255, ((759026256 ? (arr_11 [i_0 - 3] [i_0 - 3] [5] [i_0] [i_0]) : 17))))) ? (arr_1 [i_0 - 2]) : var_13));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((16907 ? 759026272 : -21)), (192304941 && 4447)));
                                var_18 = (max(var_18, (((((((arr_0 [i_4 - 2]) + var_0))) ? (((arr_0 [i_4 - 1]) ? (arr_0 [i_4 + 1]) : (arr_0 [i_4 + 1]))) : ((var_14 / (arr_0 [i_4 - 1]))))))));
                            }
                        }
                    }
                    arr_18 [i_0] [i_1 + 1] [i_2] [i_0] = ((~(max((min(2060753391, 17)), 1))));
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
                {
                    var_19 ^= (arr_13 [10] [i_1 + 2] [10]);
                    arr_21 [i_0] [i_0] = ((~(((arr_19 [i_0 + 1] [i_0]) << (60017 - 60011)))));
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_0] [i_1 + 2] [i_6] = 1478289941525638854;
                    var_20 = (arr_1 [i_1]);
                }
                var_21 = 18446744073709551594;
            }
        }
    }
    #pragma endscop
}
