/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35851
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (!1);
    var_14 &= (((((1 ? 1 : var_3)))) ? var_0 : (max(var_11, var_3)));
    var_15 = (min(var_15, ((min(120, (((((11 ? 1073741816 : 1))) ? var_11 : (((max(33385, var_9)))))))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 |= ((~(arr_6 [i_2 - 1] [i_2 - 3] [i_0 + 1])));
                    var_17 = (min(127, 1));
                }
            }
        }
    }
    #pragma endscop
}
