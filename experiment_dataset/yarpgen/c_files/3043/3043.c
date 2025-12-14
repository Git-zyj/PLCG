/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((((var_14 != 7072726658629297974) ? (((var_6 ? 1314802685 : var_17))) : var_15)))));
    var_20 = (min(var_20, (((var_11 ? (((1314802685 >> (var_4 + 8086802020413048249)))) : (max((414217489 / -1314802690), (1 * var_12))))))));
    var_21 = ((10572266227500303060 ? ((((max(var_18, var_9)) != (((-1314802709 ? 1314802669 : 1314802681)))))) : (!var_16)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_10 [i_0] [i_2] [i_2] [i_3] = (((arr_8 [i_0 - 1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2]) > 1));
                        var_22 = (min(var_22, (((((((arr_3 [i_0]) <= -1314802670))) != -0)))));
                        var_23 -= (arr_5 [i_1]);
                        var_24 = (((1 >= var_11) ? -1 : var_5));
                    }
                }
            }
        }
        var_25 -= (((-127 - 1) || 18446744073709551607));
    }
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_26 = ((((min(-6522, var_4))) != ((min((arr_12 [i_4] [i_4]), var_7)))));
        var_27 = ((!((((((var_9 + 9223372036854775807) >> (((arr_13 [i_4]) + 34)))) >> (((56497 >> 0) - 56485)))))));
    }
    #pragma endscop
}
