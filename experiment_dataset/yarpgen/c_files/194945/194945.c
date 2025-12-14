/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= ((max((max(3547438980, 50475104)), var_13)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_16 -= -32760;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 = (min(var_17, (arr_0 [i_0 - 2] [i_3])));
                            var_18 -= -50475105;
                            arr_10 [i_0] [i_1] [i_2] [i_1] &= (((((arr_6 [i_0 - 3] [i_0 - 1] [i_0 - 1] [i_0 + 2]) ? (arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 3] [i_0]) : (arr_6 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) >= -718));
                            var_19 *= ((~((((((arr_5 [i_1] [i_1] [i_3]) ? -50475092 : -50475098))) ? (15 - var_14) : 7))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
