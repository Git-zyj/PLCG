/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((((max(var_5, var_9))) / var_7))) ? (((var_7 ? 6554552218659130249 : var_16))) : (182 < 100));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 1] [i_1] [i_2] = (((1 - 100) ? ((min((((arr_0 [i_2]) << (49 - 45))), ((((arr_3 [i_0 - 1]) && (arr_3 [i_1]))))))) : (max(-56, (((arr_3 [9]) ? -7493839507061516594 : 100))))));
                    arr_8 [i_0] [i_1] [i_0] = min((arr_1 [i_0]), ((((5713628032898450384 ? 174 : 3104014398842475774)) ^ 0)));
                }
            }
        }
    }
    var_19 &= ((~(min(var_4, (min(var_4, var_3))))));
    #pragma endscop
}
