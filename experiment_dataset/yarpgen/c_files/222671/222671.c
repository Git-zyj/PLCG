/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 |= var_18;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_21 = (max(var_21, 17398));
        var_22 = (max(var_22, var_3));
        var_23 = (max(var_23, ((48134 ^ (arr_1 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        var_24 = (max(var_24, (arr_1 [i_1 + 2])));
        var_25 ^= ((((-(arr_3 [i_1 - 1]))) << (25 - 23)));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 16;i_3 += 1)
            {
                {
                    arr_9 [i_1] [4] [1] = var_5;
                    arr_10 [i_1] [i_1] [i_3] = (arr_2 [i_3]);
                    var_26 = var_6;
                    var_27 = (min(var_27, ((max((arr_8 [i_3] [i_2] [i_1 + 1]), ((~(((arr_7 [i_1] [i_3] [0]) >> 2)))))))));
                    var_28 = (min(var_28, (((((max(48134, 24))) ? ((min(-18, (arr_6 [i_1 - 1] [i_1 - 1])))) : ((~(min(var_17, var_6)))))))));
                }
            }
        }
        var_29 -= var_6;
    }
    var_30 = var_0;
    #pragma endscop
}
