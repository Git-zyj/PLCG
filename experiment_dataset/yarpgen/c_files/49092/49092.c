/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((-(max(200, 18446744073709551610)))))));
    var_12 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] [i_2] [i_1] [i_0] = (arr_8 [i_2]);
                            var_13 |= (arr_10 [i_3] [i_3] [i_3 - 1] [i_3]);
                            var_14 = (min(((((min(var_2, var_2))) ? var_3 : ((1 ? 982428054 : 157)))), (arr_4 [i_0] [i_1] [i_0])));
                        }
                    }
                }
                var_15 ^= ((~(arr_0 [i_0])));
            }
        }
    }
    #pragma endscop
}
