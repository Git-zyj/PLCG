/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_2;
    var_21 &= (var_12 / 3930908434);
    var_22 = ((((min(0, var_18))) & var_10));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_1 + 2] [i_1] = 1199583701;
                var_23 ^= var_12;
                arr_8 [i_1] = ((!((max(((min(var_11, 192))), (~3095383594))))));
            }
        }
    }
    #pragma endscop
}
