/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25775
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= ((min(-var_3, (min(var_8, 1)))) >> (((min(var_8, var_9)) - 13076)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_7 [i_1] [8] [i_1] |= (!0);
                var_11 = (min(((-1777 ? 1 : 528482304)), ((-((max(1, 1)))))));
            }
        }
    }
    var_12 &= ((2072423619 >> (45588 - 45586)));
    #pragma endscop
}
