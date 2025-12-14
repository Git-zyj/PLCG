/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= ((-((((min(63, 63))) ? var_1 : ((min(var_9, var_14)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (-127 - 1);
                    arr_9 [i_0] [i_1] [i_2] = (arr_7 [i_0] [0] [4]);
                    var_21 = ((!(((~((var_4 << (var_17 + 22))))))));
                    arr_10 [13] = (min((63 == var_7), (((arr_1 [i_0]) | ((min(127, 0)))))));
                }
            }
        }
    }
    #pragma endscop
}
