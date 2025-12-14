/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [4] = 230;
                arr_6 [i_0] = (0 != -90);
            }
        }
    }
    var_20 = ((var_8 != (min(((8160 ? var_17 : 255)), (max(var_11, -8635605846261764969))))));
    var_21 = var_19;
    #pragma endscop
}
