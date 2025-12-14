/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52109
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_10 = (max(-1579736682, 1));
                            var_11 = ((!((((arr_5 [9] [i_1] [i_1] [i_3 + 1]) ? 31 : (arr_5 [14] [i_1] [14] [i_3 + 1]))))));
                        }
                    }
                }
                var_12 -= ((((max((0 & 0), (arr_1 [i_0] [i_1 - 1])))) / (max((arr_3 [i_1 + 1]), 5025770042081167379))));
            }
        }
    }
    var_13 ^= ((((((9649740897771273336 + 71) % ((max((-9223372036854775807 - 1), var_0)))))) ? 1 : var_2));
    #pragma endscop
}
