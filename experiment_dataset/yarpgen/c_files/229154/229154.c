/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229154
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [i_3] [i_3] = (((((var_0 & (arr_0 [i_0])) >> ((((1659239594 ? (arr_4 [i_4]) : (arr_10 [i_0] [i_0] [4] [6] [i_3] [i_1]))) - 195))))));
                                arr_14 [i_3] = min(((((min(var_4, (arr_6 [i_1] [i_3]))) != ((min(1352283777642406100, (arr_8 [i_0] [16] [7] [7] [1] [i_0]))))))), (~var_4));
                            }
                        }
                    }
                    var_12 = (var_3 & var_0);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 0;i_6 += 1)
                        {
                            {
                                var_13 ^= (min(((((arr_18 [i_0] [i_0] [10] [i_0] [i_0]) || (!1452051678)))), ((var_5 ? ((1352283777642406100 ? (arr_1 [i_1]) : 193137171279015960)) : (((min(var_6, 1))))))));
                                var_14 = (min((((((min(var_6, var_10))) ? 0 : (min(24808, var_2))))), (((min(var_4, var_11)) << (var_2 - 3405321758)))));
                                var_15 += (((!var_11) ? (((((min(-1352283777642406080, 0)) + 9223372036854775807)) << (((((min(813690718, -9)) + 46)) - 37)))) : (arr_3 [i_1] [i_1])));
                                var_16 = 1673772764;
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 8;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 11;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 8;i_9 += 1)
                {
                    for (int i_10 = 4; i_10 < 11;i_10 += 1)
                    {
                        {
                            var_17 = ((!(arr_18 [14] [i_7 + 3] [i_7] [7] [i_9 + 3])));
                            var_18 = (min(28, ((-((var_5 ? -100 : var_0))))));
                            var_19 = ((10225912735894546704 ? (min(1029308245, 18446744073709551615)) : (min((arr_20 [i_8 - 1]), var_1))));
                            var_20 = -47;
                            var_21 = (((!52) && ((min(813690734, (arr_19 [i_7 + 2] [i_8 - 1]))))));
                        }
                    }
                }
                arr_29 [1] [i_8] [3] = (min(var_4, ((min(61, (arr_19 [i_8 + 1] [i_8]))))));
                arr_30 [i_7] [i_8] [i_8] = 9223372036850581504;
            }
        }
    }
    var_22 -= 1720;
    var_23 = (min(var_23, (((!(((var_2 ? (127 || var_11) : var_4))))))));
    #pragma endscop
}
