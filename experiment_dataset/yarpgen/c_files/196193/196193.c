/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    arr_8 [4] = (((((min(var_10, (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) * 0)));
                    var_20 *= var_2;
                }
            }
        }
    }
    #pragma endscop
}
