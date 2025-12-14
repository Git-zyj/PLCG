/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 -= (!var_14);
                    var_21 = (-5855 + 926);
                }
            }
        }
    }
    var_22 = ((-(((!((min(0, var_17))))))));
    var_23 = ((max((max(var_17, var_17)), 0)));
    #pragma endscop
}
