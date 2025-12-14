/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222290
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222290 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222290
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;
    var_18 = var_14;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = (max(var_19, (max(var_9, (((arr_4 [i_0]) ? var_11 : var_11))))));
                arr_5 [4] [i_0] [i_0] = 1;
            }
        }
    }
    var_20 |= ((-((10 ? (~var_11) : var_8))));
    #pragma endscop
}
