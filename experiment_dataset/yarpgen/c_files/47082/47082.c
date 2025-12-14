/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= 56;
    var_12 = (max(((var_10 | (~var_9))), ((min(var_2, (min(-11594, 731574137)))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_13 ^= (min((((var_8 ? var_2 : (arr_5 [i_1])))), 53));
                    var_14 = (min(var_14, var_10));
                    arr_8 [i_0] [6] [i_2] = var_2;
                    var_15 *= (((min(var_10, (var_5 | var_3))) / (~-123)));
                }
            }
        }
    }
    #pragma endscop
}
