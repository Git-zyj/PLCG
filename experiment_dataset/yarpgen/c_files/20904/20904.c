/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20904
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_18 ^= ((~(min((min(var_5, var_8)), (arr_1 [i_1 - 1])))));
                var_19 &= ((-(min(3207431535781510507, 0))));
            }
        }
    }
    var_20 = (min(var_17, 4294967295));
    var_21 = ((((((((-127 - 1) <= 28348)) ? -25 : (!37187)))) >= ((-(min(var_11, 4294967275))))));
    #pragma endscop
}
