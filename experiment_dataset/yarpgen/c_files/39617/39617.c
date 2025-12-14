/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_0] [i_3] = (1082066697615811176 ? (min((var_8 % 17524), ((min(160, var_6))))) : (((var_0 | ((max(8, 0)))))));
                            var_15 = ((249 + ((var_8 ? 9188420113625002311 : 9212840630008039721))));
                            arr_11 [i_3] [i_0] [i_2] [i_1] [i_0] [i_0] = ((6 ? ((min(249, 74))) : ((104 >> (194 - 168)))));
                            var_16 = ((((((115 ? var_3 : 3)) + 2147483647)) << (var_4 - 16222187628693150537)));
                        }
                    }
                }
                var_17 = (max((((((0 ? -40 : 1))) | (var_6 & 16681544235102044955))), (((((var_9 ? var_12 : var_5))) ? (max(96, var_14)) : 199))));
            }
        }
    }
    var_18 = 1;
    #pragma endscop
}
