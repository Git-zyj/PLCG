/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231720
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 |= var_8;
    var_14 ^= var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((((((((arr_5 [i_0] [i_1] [i_2] [i_2]) ? var_12 : (arr_2 [0] [i_1] [i_1])))) | (min(var_6, (-9223372036854775807 - 1)))))))));
                    var_16 = (~var_1);
                }
            }
        }
    }
    #pragma endscop
}
