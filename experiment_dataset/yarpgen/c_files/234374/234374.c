/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_2 ? ((var_2 / (var_16 + var_17))) : -2431637335));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = max(15, (max(44, 15)));
                arr_7 [0] [i_1] [i_0] = var_18;
                arr_8 [i_1] [i_1 + 1] [i_0 - 1] = (arr_2 [i_0]);
            }
        }
    }
    var_21 = (268435455 && 16383);
    #pragma endscop
}
