/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232219
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_11 = -3197;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] = ((18446744073709551596 ? ((~(-2147483647 - 1))) : ((0 ? 8 : -2147483639))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            arr_14 [i_0] [i_0] [i_2] [i_3] [9] = 1016454048498211666;
                            arr_15 [7] [12] [i_2] [i_3] [i_4] = ((((((-2147483647 - 1) ? 18446744073709551596 : 0))) ? -9223372036854775798 : -13439));
                            var_12 = -22408;
                            var_13 = (-2147483647 - 1);
                        }
                    }
                }
            }
        }
    }
    var_14 = (((((var_0 ? (min(-1589754386, -4)) : var_8))) ? ((-(-71 + 16))) : var_9));
    #pragma endscop
}
