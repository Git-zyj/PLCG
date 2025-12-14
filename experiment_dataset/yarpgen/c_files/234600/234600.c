/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_11 = 224;
                                var_12 = arr_11 [i_0] [i_0];
                                arr_13 [i_2] [i_1] [i_2] [i_3] [i_4] [i_3] = (-107 <= 127);
                            }
                        }
                    }
                    var_13 = (max(var_13, ((min(((-28 ? ((max(48, (-2147483647 - 1)))) : ((1857811133 / (arr_3 [i_0]))))), (2437156162 ^ 2437156148))))));
                    var_14 = (((((35958428274786304 ? 18446744073709551615 : -871257147))) ? (6381448790211932069 == var_5) : ((9534638496007282879 >> (604562188446725058 - 604562188446725037)))));
                    arr_14 [i_0] [i_1] &= var_3;
                }
            }
        }
    }
    #pragma endscop
}
