/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242510
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_20 = ((((max(18685, (arr_3 [i_2 - 2])))) / 2));
                    var_21 |= (65535 ^ ((((~(arr_4 [i_2] [5] [i_0]))) ^ -266189376)));
                }
            }
        }
    }
    var_22 = ((~(((var_4 ? var_11 : var_15)))));
    var_23 = (120 && 1460662442);
    #pragma endscop
}
