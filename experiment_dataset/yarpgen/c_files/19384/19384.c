/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = ((~(((142 == ((max(var_7, (arr_4 [i_0] [i_1])))))))));
                arr_5 [i_0] [i_0] = -var_2;
                var_14 = (max(7, -var_6));
            }
        }
    }
    var_15 = (max(var_15, var_5));
    #pragma endscop
}
