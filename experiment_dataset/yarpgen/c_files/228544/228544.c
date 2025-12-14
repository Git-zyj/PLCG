/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_14 = max(127, -1);

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_15 = (!var_3);
                    var_16 ^= (min((-2147483647 - 1), 2147483647));
                    arr_8 [3] [3] [8] [i_0] = (~-var_5);
                    var_17 -= var_2;
                }
            }
        }
    }
    #pragma endscop
}
