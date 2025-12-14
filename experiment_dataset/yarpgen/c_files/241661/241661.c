/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241661
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((0 ? 51166 : -2503364459629613167)))));
    var_20 = (max(var_20, ((((((6210 == var_15) ? var_17 : (2097152 <= 110))) % var_10)))));
    var_21 = ((((max((var_9 / var_11), ((var_13 ? 20 : -29))))) < -1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_22 ^= var_14;
                var_23 = (min(13423, (min(269727610, (-103 >= 11320761635277923417)))));
            }
        }
    }
    #pragma endscop
}
