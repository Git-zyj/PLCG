/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, ((((-1898356337 & 1152921504606846976) & (~var_1))))));
    var_13 = (-2147483647 - 1);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (max((~3186848760), (((!(((var_0 ? var_11 : var_4))))))));
                    var_15 = ((((max(var_1, (~3)))) >= (max(var_8, (max(13797737182943265618, 3))))));
                    arr_6 [0] [i_1] [i_2] [i_0] = ((var_8 ? (arr_3 [i_1 + 1]) : (arr_0 [i_1 + 1] [i_1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_16 -= (((arr_10 [i_4] [2]) * (var_1 % -1152921504606846976)));
                var_17 -= ((((((((var_8 + 2147483647) << (1522829393 - 1522829393)))) ? (max(var_7, 0)) : ((var_5 - (arr_9 [1] [i_4]))))) << ((((((min(47772, 47745))) >> (((arr_2 [i_3]) & 1041630289)))) - 23815))));
                var_18 = (min(var_18, var_8));
            }
        }
    }
    #pragma endscop
}
