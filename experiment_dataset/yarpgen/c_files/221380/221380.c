/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221380
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_10 -= ((!((((min(var_5, (arr_6 [i_0] [i_0] [i_2]))) ^ (((((arr_3 [i_0] [i_0] [i_2]) + 2147483647)) << (((arr_1 [i_1]) - 4355)))))))));
                    var_11 ^= (var_3 ? (!var_3) : (!var_5));
                }
            }
        }
    }
    var_12 = var_3;
    var_13 = var_4;
    #pragma endscop
}
