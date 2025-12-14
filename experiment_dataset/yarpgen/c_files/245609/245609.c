/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (((var_6 - (min(((-5791013480178698884 - (-9223372036854775807 - 1))), ((min(var_9, var_3))))))))));
    var_11 = ((var_0 ? (((-9223372036854775807 - 1) * 1)) : (((((1023 ? 330849246120915477 : 159))) ? ((-5791013480178698896 ? 1003067156 : 9223372036854775807)) : (105 || 150)))));
    var_12 += ((5791013480178698871 ? 105 : 9223372036854775807));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = ((!(arr_9 [i_0] [i_1] [i_2 - 1] [8] [i_1])));
                                var_14 += (((((var_5 | (arr_6 [i_2] [i_0] [i_0] [i_0])))) ? (arr_11 [8] [1] [i_2] [i_4 - 1] [i_4 - 1] [13]) : (((((((-127 - 1) ? (arr_0 [1]) : (arr_6 [i_0] [i_0] [i_2] [i_3])))) ? (arr_4 [i_3 - 2] [i_1] [4]) : var_0)))));
                            }
                        }
                    }
                }
                var_15 = (min(var_15, var_5));
                var_16 ^= (-51 | 99);
                var_17 = (min(var_17, ((min(((((max(1, -8834787101089649965))) ? ((var_0 ? (arr_3 [i_1]) : (arr_3 [9]))) : (31175 - -7061551099809443123))), ((max((((0 >> (var_8 - 170)))), (min((arr_4 [i_0] [i_1] [10]), (arr_10 [i_0])))))))))));
            }
        }
    }
    var_18 = (min(var_18, ((min((~127), ((8834787101089649964 ? 136 : -11)))))));
    #pragma endscop
}
