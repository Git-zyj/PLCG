/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19500
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_10 += (((!var_3) && (((min((arr_1 [i_1]), var_1))))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        arr_9 [i_0] [i_1] [i_2] = (((65535 || (arr_8 [i_2 - 2] [i_2 - 1] [i_2 - 3] [i_3]))));
                        var_11 -= (min(var_0, (((((~(arr_6 [i_0] [i_1] [i_2] [i_3]))) != (arr_1 [i_1]))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_0] [1] = (!236);
                        var_12 = (arr_1 [i_0]);
                    }
                    var_13 = (arr_12 [i_0] [i_0] [i_0] [5] [i_2] [i_2 - 3]);
                }
            }
        }
    }
    var_14 = (max(var_5, ((~(var_7 - var_5)))));
    #pragma endscop
}
