/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0 + 2] [i_0] = 0;
                    var_16 = (i_0 % 2 == 0) ? ((((arr_6 [i_0] [i_0 - 3] [i_0 - 3]) >> (-39 + 47)))) : ((((((arr_6 [i_0] [i_0 - 3] [i_0 - 3]) + 2147483647)) >> (-39 + 47))));
                }
            }
        }
    }
    var_17 = (min(var_17, (~var_11)));
    var_18 = var_10;
    var_19 = (~var_11);
    #pragma endscop
}
