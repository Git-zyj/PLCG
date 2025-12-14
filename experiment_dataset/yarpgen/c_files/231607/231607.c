/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231607
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((-(((!(!var_5))))));
    var_20 = (((var_0 / ((2531219680 ? 1 : 3101820686)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_21 = (min(var_21, (((((((42 & var_3) ? 3101820686 : 0))) ? (((((2 ? 3747168977 : 3311721303))) ? 103 : (max(var_17, var_17)))) : 983245993)))));
                var_22 = 4211328736289321883;
                var_23 = 94;
            }
        }
    }
    var_24 |= (53892 != var_4);
    #pragma endscop
}
