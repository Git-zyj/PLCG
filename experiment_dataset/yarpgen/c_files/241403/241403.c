/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = (~-1);
        var_21 *= ((-3 ? 54525 : 35649));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_5 [i_1] = (~1879048192);

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    {
                        var_22 *= -3395180857887569559;
                        arr_13 [4] [3] [i_3] = ((((47642 >> (65535 - 65524))) / 29887));
                        arr_14 [i_1] [14] [i_2] [i_3] [i_3] [i_4] = min(((min(16860, 1))), (min(6138482094513166731, (arr_4 [i_1] [i_1]))));
                        arr_15 [11] [i_1] = (!-1);
                    }
                }
            }
            var_23 = (min(var_23, var_17));
            var_24 &= max((min((min(var_13, var_1)), (arr_7 [i_2]))), (((!(arr_8 [i_2] [i_2] [i_2] [i_2])))));
        }
    }
    var_25 *= var_8;
    #pragma endscop
}
