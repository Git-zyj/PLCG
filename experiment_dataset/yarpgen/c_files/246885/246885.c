/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246885
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 = (~var_7);
                    var_20 = ((~(41 & 24057)));
                }
            }
        }
        var_21 = (min(var_21, ((min((((202 / (1 + 349372319)))), 13184861446650557247)))));
        var_22 = (max(var_22, (((-((((((arr_4 [12]) ? var_9 : (arr_1 [9] [9])))) ? ((var_2 ? 16296918879916904341 : 5261882627058994370)) : ((max(-47, (arr_6 [6])))))))))));
        var_23 = (min((max((var_7 * 12277489944272226465), 19998)), (arr_5 [6])));
    }
    var_24 |= (1 | -65);
    #pragma endscop
}
