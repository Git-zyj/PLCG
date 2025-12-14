/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_21 = 4;
                    var_22 = ((~((-1 ? 734009899 : (arr_4 [i_0 + 2] [i_0 - 2])))));
                }
            }
        }
    }
    var_23 = (min((max(((65519 ? -5591432422372882317 : 17)), 22)), var_18));
    var_24 = (max(((min(32, (!var_15)))), (max(8834529127658414395, ((var_19 ? -136381040 : 8834529127658414395))))));
    #pragma endscop
}
