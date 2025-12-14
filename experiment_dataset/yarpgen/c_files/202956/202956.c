/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202956
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 *= ((~(arr_1 [5] [5])));
                var_20 &= ((!(arr_2 [i_0] [i_1] [i_1])));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    var_21 = ((+((14318 ? (arr_5 [1] [1] [i_0] [i_0]) : 0))));
                    var_22 = 0;
                }
            }
        }
    }
    var_23 &= ((((((min(var_13, var_7))))) >= (max(var_6, var_7))));
    #pragma endscop
}
