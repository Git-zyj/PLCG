/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((-19795 & ((max(var_4, 13980))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_19 = ((~(arr_1 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_20 = max((min((arr_9 [i_2] [i_2] [i_0] [i_2] [i_3]), (arr_8 [i_1] [i_0] [i_3 + 1] [i_0]))), 242);
                            var_21 -= ((((max((arr_1 [i_2 - 1] [i_2 + 1]), (((arr_7 [i_1] [i_2] [i_1] [i_1]) ? -19795 : var_7))))) ? (arr_1 [i_2 + 1] [i_3 + 1]) : 1890442443));
                        }
                    }
                }
                arr_10 [i_0] [i_0] = arr_6 [i_0];
            }
        }
    }
    var_22 = max(((var_8 ? 937184942 : (244 / 1))), (((!((min(var_13, -7777589353364266218)))))));
    var_23 = (min(var_11, (max(var_6, -19769))));
    #pragma endscop
}
