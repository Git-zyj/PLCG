/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_16 [i_4] [i_3] [i_1] [i_1] [i_0] = -0;
                                var_19 = var_15;
                                var_20 += ((((min((arr_15 [i_1 - 1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1]), (arr_7 [i_1 - 2] [i_1] [i_1 + 1])))) ? (var_1 / 1814606212) : (((arr_15 [i_1 + 1] [i_1] [i_1] [i_1 - 1] [i_1] [i_1]) ? (arr_7 [i_1 - 3] [i_1 - 1] [i_1]) : (arr_15 [i_1 - 2] [i_1 - 2] [16] [i_1 + 1] [i_1] [i_1])))));
                                arr_17 [i_3] |= (((arr_10 [i_3] [i_4]) ? 18446744073709551615 : 0));
                            }
                        }
                    }
                }
                arr_18 [i_1] = ((((min(32767, 0))) ? (((!(arr_13 [i_1 + 1])))) : (var_5 >= -3763)));

                for (int i_5 = 2; i_5 < 24;i_5 += 1)
                {
                    var_21 = (max(var_21, ((((((max(var_13, var_16)) >= (arr_19 [i_1 - 2] [7] [i_1]))) ? var_8 : (min((arr_20 [i_0] [i_1]), ((4285897161584113465 ? (arr_7 [i_0] [i_1 - 1] [i_5]) : var_7)))))))));
                    var_22 |= 3485962817938102296;
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_23 ^= (min(((~((var_13 << (var_9 - 21989))))), (~var_10)));
                                var_24 = var_16;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_8 = 1; i_8 < 13;i_8 += 1)
    {
        for (int i_9 = 2; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                {
                    var_25 = (max(var_25, (((3485962817938102296 ? (arr_27 [i_9] [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 - 2]) : (var_6 % 4285897161584113444))))));
                    var_26 = (((((57895 ? ((-(arr_28 [i_8] [i_9] [i_10]))) : (((!(arr_37 [9] [i_9] [i_9]))))))) / ((var_2 | ((((!(arr_2 [i_9 - 2])))))))));
                    var_27 = ((~(arr_7 [i_9 - 1] [i_9] [i_8 - 1])));
                }
            }
        }
    }
    #pragma endscop
}
