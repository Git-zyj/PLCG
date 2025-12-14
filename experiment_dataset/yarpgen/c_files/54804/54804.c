/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= ((((((1230408091 ? var_13 : var_6))) / var_12)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 7;i_2 += 1)
            {
                {
                    var_15 = (((-32767 - 1) >= ((max(var_9, (arr_7 [i_1 - 2] [i_1 - 4] [i_2 + 2]))))));
                    arr_9 [i_0] [i_2] [i_2] = (min((((!(arr_5 [i_2] [i_1] [i_0])))), (min(((17 ? 23 : -24)), -1728392407))));
                    arr_10 [i_2] [i_1 - 3] [i_2 + 3] [i_1 - 3] = ((~(min(var_0, 2097151))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [5] [i_2 + 4] [i_0] [i_2] = ((~(max(((max(var_3, var_6))), ((var_1 % (arr_0 [i_0])))))));
                                var_16 = (((arr_2 [i_0] [i_0]) << (-18 - 65518)));
                                var_17 = (min(var_17, (((((((arr_4 [i_1 - 4]) + ((1728392408 ? var_0 : (arr_11 [i_3] [i_3] [i_3] [i_3] [i_3])))))) ? (((2097175 ? (-32767 - 1) : 23))) : (((var_1 ? var_2 : var_8))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 0;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 18;i_7 += 1)
            {
                {
                    var_18 = (((-24 ? (arr_20 [i_7 + 1] [i_7 + 1] [i_5 + 1]) : (arr_17 [i_5 + 1] [i_5 + 1]))));
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 3; i_9 < 19;i_9 += 1)
                        {
                            {
                                var_19 -= ((((+(((((-32767 - 1) + 2147483647)) >> (var_4 + 32638))))) << (-9223372036854775801 - -9223372036854775804)));
                                var_20 += (!-var_13);
                            }
                        }
                    }
                    var_21 = (((((var_0 ? var_2 : (2147483392 % 9699492101039750666)))) ? ((488739353 ? ((min(var_3, var_6))) : 72)) : ((-(((arr_20 [i_5] [i_6] [i_7 - 1]) | var_4))))));
                }
            }
        }
    }
    #pragma endscop
}
