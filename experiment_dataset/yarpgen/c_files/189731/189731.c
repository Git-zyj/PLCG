/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189731
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (max((var_4 != var_19), (max((((-2629909177103210168 ? 2407 : var_0))), (((arr_4 [i_1] [17] [i_0]) - (arr_5 [i_1])))))));
                    arr_9 [i_1] [0] [i_1] = ((-((((!(arr_3 [i_0] [i_2] [i_2]))) ? ((var_2 ? (arr_8 [i_0] [i_2]) : var_10)) : (((107 ? 128 : (arr_2 [i_0] [10]))))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2 - 1] &= (max((((arr_8 [i_0] [i_0]) ? 129 : (arr_2 [i_0] [i_0]))), (arr_7 [i_0] [i_2 + 1] [i_0])));
                    var_21 ^= 122;
                    arr_11 [i_1] [i_1 + 1] [i_1] [i_1] = (i_1 % 2 == zero) ? (((((131 << (((arr_7 [i_0] [i_1 - 1] [i_1]) - 68)))) | ((max((arr_7 [i_0] [i_1 + 2] [i_1]), (arr_7 [3] [i_1 + 1] [i_1]))))))) : (((((131 << (((((arr_7 [i_0] [i_1 - 1] [i_1]) - 68)) + 33)))) | ((max((arr_7 [i_0] [i_1 + 2] [i_1]), (arr_7 [3] [i_1 + 1] [i_1])))))));
                }
            }
        }
    }
    var_22 = (max(-var_1, 6705));
    #pragma endscop
}
