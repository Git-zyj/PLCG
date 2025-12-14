/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_11 = (arr_1 [i_0]);
        var_12 = (min(var_12, (((((min((arr_1 [10]), (arr_0 [12] [12])))) ? (((!(arr_0 [4] [4])))) : (~5953))))));
        var_13 = (arr_0 [i_0] [i_0]);
        arr_3 [i_0] = (((-1413838142614578144 + 0) ^ (min((min(110, -1995909957579924445)), ((((arr_0 [2] [i_0]) ? 237 : 1)))))));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        var_14 = ((max((((arr_4 [15] [i_1]) & (arr_4 [13] [i_1]))), (arr_5 [17] [i_1]))));
        var_15 = (((min(((!(arr_5 [i_1] [i_1]))), (!2))) ? (((2047 && (((468806643 ? 468806648 : (arr_4 [i_1] [i_1]))))))) : var_1));
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1)
    {
        var_16 = 3276644521;
        var_17 *= ((33554431 == (66 | 691322152)));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_11 [i_3] = -1995909957579924457;
        arr_12 [i_3] [i_3] = (var_8 < var_7);
        var_18 = var_7;
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                {
                    var_19 = (max(((!((((arr_9 [i_4]) ? (arr_2 [i_4]) : 50255))))), ((((((var_6 && (arr_15 [i_4]))))) <= (((arr_15 [i_4]) + var_4))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 9;i_8 += 1)
                        {
                            {
                                var_20 = ((134217720 % (arr_10 [i_8] [i_8])));
                                arr_27 [i_4] [1] [i_4] [i_6 - 1] [1] [i_6 - 1] = var_6;
                            }
                        }
                    }
                    arr_28 [i_5] [i_4] [10] = ((!(arr_21 [i_4] [i_4] [i_4] [10] [i_4])));
                }
            }
        }
    }
    var_21 = ((var_0 ? var_4 : var_4));
    var_22 = (min(var_22, ((((-1413838142614578144 + 9223372036854775807) >> (var_1 - 1768713918))))));
    var_23 = ((-1 ? 2362239823 : var_4));
    #pragma endscop
}
