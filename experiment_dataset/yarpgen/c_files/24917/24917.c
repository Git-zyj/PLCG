/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-2280237749377636460 ? -495424712413582001 : 1));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] = (((((1024 ? var_2 : var_6)) * (((31525197391593472 ? var_1 : var_13))))) / (min(-1, (min(1005, 31525197391593488)))));
                arr_6 [i_0] = var_16;
                arr_7 [i_0] [i_0] [i_1] = (((16915 == 15) < ((16915 ? 0 : -1039))));
            }
        }
    }
    var_18 = (((((15 ? 1 : -4096))) ? -235514954145248826 : (min((-9223372036854775807 - 1), (-5714435457832753064 / 17179869183)))));
    #pragma endscop
}
