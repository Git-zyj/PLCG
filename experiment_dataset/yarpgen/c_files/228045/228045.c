/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228045
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 127;
    var_14 = (min(-127, (max(((var_12 ? var_0 : 1547528708619109332)), ((var_4 ? -127 : var_1))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [1] [i_0] = ((125 ? var_5 : (arr_0 [i_0])));
        var_15 = -126;
        var_16 += ((var_6 ? (arr_1 [i_0]) : var_10));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = var_11;
                        var_18 = (~var_12);
                    }
                }
            }
        }
        var_19 = (max(var_19, ((((arr_8 [i_0] [1] [i_0] [i_0] [i_0] [1]) ? ((((-1637106616 + 2147483647) >> var_10))) : ((10828 ? 6390936744261114869 : (-127 - 1))))))));
    }
    #pragma endscop
}
