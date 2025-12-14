/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235166
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (28 <= 28);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 7;i_1 += 1)
        {
            {
                var_21 += (arr_2 [i_0] [1]);
                arr_4 [i_0] [i_0] = (-19 != (!-163305012045320956));
                var_22 = (arr_3 [5] [i_0] [7]);
            }
        }
    }
    var_23 = var_17;
    #pragma endscop
}
