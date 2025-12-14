/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = ((max(((var_3 ? var_7 : var_8)), ((29418 ? 0 : var_8)))));
                    arr_8 [i_2] [i_0] [i_0] [i_0] |= (((-31929 ? 4294967295 : 17498675931226433913)));
                }
            }
        }
    }
    var_15 = (var_12 >= 1);
    #pragma endscop
}
