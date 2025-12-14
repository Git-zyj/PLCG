/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203756
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((990399980 >> (var_2 - 4529)))) ? var_7 : var_5));
    var_11 = ((var_9 ? (((-((var_6 ? var_9 : 268435455))))) : (((var_1 + var_9) | ((990399980 ? 1108307720798208 : var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 = (min(((-990399981 ? (((((arr_3 [15]) == var_3)))) : (arr_4 [16] [i_0] [i_0] [i_0]))), (min((((arr_0 [i_1]) - (arr_4 [i_0] [i_1] [i_0] [i_0]))), (((-990400012 ? (arr_3 [i_0]) : (arr_5 [i_0] [i_0]))))))));
                    arr_6 [i_0] [7] = 268435455;
                }
            }
        }
    }
    #pragma endscop
}
