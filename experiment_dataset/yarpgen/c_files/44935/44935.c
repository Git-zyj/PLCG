/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += 896239010;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (((var_0 ? -var_5 : (((!((max(60536, (arr_2 [i_0]))))))))))));
                    arr_8 [i_0] [i_0] [i_0] [2] &= ((-2098942767 ? (arr_5 [i_0] [i_1] [i_2]) : (arr_5 [i_1] [i_1 + 2] [i_1])));
                    var_16 ^= ((9223372036854775794 ^ (arr_3 [i_2] [i_1 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
