/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_16 = (~-var_8);
                    var_17 = ((var_4 ? ((~((var_6 ? var_11 : var_3)))) : var_9));
                    var_18 = var_12;
                    var_19 = ((-(!-var_8)));
                }
            }
        }
    }
    var_20 = var_1;
    var_21 = ((!(((-((var_9 ? var_6 : var_10)))))));
    var_22 = ((~(((~var_0) ? (~var_4) : (~var_10)))));
    #pragma endscop
}
