/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((-79 ? -12 : 14528891953161547039)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] = ((((((((arr_4 [i_0]) ? 79 : 7))) ? (((-1841444446053970198 + 9223372036854775807) << (177 - 177))) : (min(8894073038579680869, var_11)))) - (arr_5 [i_0] [i_1] [i_1] [11])));
                    var_17 ^= ((36 ? ((var_13 ? (arr_2 [i_2] [i_1]) : (arr_2 [i_1] [i_2]))) : ((78 ? (arr_2 [i_0] [i_2]) : (arr_2 [0] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
