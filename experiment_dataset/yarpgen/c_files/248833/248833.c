/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248833
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = ((63 ? var_10 : var_0));
                    var_21 = (((min(var_16, (arr_5 [i_0 + 2])))) / -62);
                    arr_7 [i_0] [1] = -62;
                }
            }
        }
    }
    var_22 = (max(var_13, (var_0 || var_16)));
    var_23 = (!74);
    #pragma endscop
}
