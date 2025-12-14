/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 14;i_3 += 1) /* same iter space */
                    {
                        arr_10 [i_0] [6] [i_2] [6] = (!-13223402595715878844);
                        var_12 = (!var_2);
                    }
                    for (int i_4 = 3; i_4 < 14;i_4 += 1) /* same iter space */
                    {
                        var_13 -= (((~(arr_1 [i_1]))));
                        arr_15 [i_0] [i_1] [2] [i_4] = ((!(arr_3 [i_4 + 2] [i_4 - 3] [i_4 - 2])));
                    }
                    arr_16 [i_0] [i_0] [i_0] = (-9223372036854775807 - 1);
                    var_14 |= var_11;
                }
            }
        }
        arr_17 [i_0] [11] = (((arr_8 [i_0] [i_0] [i_0]) < -var_8));
    }
    var_15 ^= ((9223372036854775803 ? 9223372036854775807 : (-9223372036854775807 - 1)));
    #pragma endscop
}
