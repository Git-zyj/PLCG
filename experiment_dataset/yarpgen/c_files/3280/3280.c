/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(7291422815852018536, 86));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0] [i_1] = (arr_5 [1]);
                arr_8 [1] [i_1 - 1] [i_1] = -46437;
            }
        }
    }
    var_13 = var_1;
    #pragma endscop
}
