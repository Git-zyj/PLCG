/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 = 9223372036854775807;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (((min(18446744073709551615, 127)) != 15));
                    arr_9 [16] &= (min(((max(2147483640, 1))), 1));
                    var_19 &= (min(((((-2147483647 - 1) != 1))), 4294967295));
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1)
    {
        var_20 = ((((32767 + (4294967294 >> 0))) >= (max(134201344, 128))));
        arr_12 [i_3] [i_3] = (!(!2147483633));
        arr_13 [i_3] [i_3] = (((65516 && 1) ^ (~33)));
    }
    var_21 = (min(var_21, 12582912));
    #pragma endscop
}
