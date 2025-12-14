/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249384
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 = (arr_5 [i_2] [i_1] [i_0]);
                    var_11 += ((arr_0 [i_2] [i_2]) <= (((-6658151859592384829 ? -30 : 14712))));
                }
            }
        }
    }
    var_12 = (min(((65535 ? var_3 : (max(274877906928, var_1)))), (((((var_3 ? var_4 : 237))) ? -274877906946 : 181))));
    var_13 ^= var_6;
    var_14 -= ((max(((max(var_3, var_9)), 274877906922))));
    #pragma endscop
}
