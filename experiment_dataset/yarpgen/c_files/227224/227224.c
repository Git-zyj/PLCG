/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227224
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_5;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_2 + 1] [i_2 + 1] [i_2] [i_0] = (((((-6254528102546694842 % (arr_8 [15] [i_2 + 2])))) ? (((!((min(var_1, (arr_6 [i_0 - 1] [9]))))))) : var_11));
                    var_17 = var_0;
                }
            }
        }
    }
    var_18 -= var_6;
    var_19 = (((6254528102546694842 <= 504631420) ? var_4 : (min(var_5, -var_3))));
    var_20 = (~var_10);
    #pragma endscop
}
