/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42807
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (~var_3);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                arr_7 [i_0] = (min(-2105754911776364979, (min((min(2446450677834827673, var_3)), 1545504212))));
                arr_8 [0] = (min(((~(arr_2 [i_0 + 1] [i_1 - 2]))), (!var_6)));
                var_12 |= var_2;
            }
        }
    }
    #pragma endscop
}
