/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -1019821037;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 *= (min(63878, 25));
                var_21 = (((~(arr_5 [i_0]))));
                var_22 = ((var_2 ? (arr_1 [i_1]) : (arr_5 [i_0])));
                var_23 = ((-1019821030 ? (((((min(var_18, (arr_3 [i_1]))) >= (63878 - var_6))))) : (min((min(-1019821023, (arr_3 [i_1]))), (arr_4 [i_0 - 1] [i_0 + 3] [i_0 + 4])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_24 = ((((var_0 ? (~var_18) : (((arr_9 [i_0] [i_1] [i_2] [i_2]) | (arr_10 [i_0 + 1] [i_0] [i_1] [i_1] [i_0 + 1] [i_0]))))) % (((((max(var_15, 1657))) ? var_5 : var_5)))));
                            var_25 = (max((((((0 || (arr_1 [i_0 + 3])))))), (min(var_16, ((~(arr_9 [i_0] [i_1] [i_2] [i_3])))))));
                            var_26 = (max((arr_2 [i_0]), (min((arr_2 [i_0]), (arr_7 [i_0 + 4] [i_0 + 2] [i_0 + 2] [i_3])))));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 4; i_4 < 23;i_4 += 1)
    {
        var_27 = (min(var_27, (min(((-var_13 ? (max(var_16, var_0)) : ((((arr_13 [i_4 - 4]) + var_5))))), (((var_3 ? (((!(arr_13 [i_4])))) : (arr_15 [i_4 + 1]))))))));
        var_28 = min((min((((arr_13 [i_4 - 4]) && (arr_14 [i_4 - 2]))), ((var_8 || (arr_14 [i_4 + 1]))))), (arr_15 [i_4]));
        var_29 = ((-(arr_15 [i_4])));
        var_30 &= var_17;
    }
    #pragma endscop
}
