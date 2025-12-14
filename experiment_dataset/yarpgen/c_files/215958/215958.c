/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215958
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((~(~4)));
    var_21 = 64;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_22 = (max(var_22, ((((((~(~0)))) ? (((!(arr_2 [i_0] [i_0])))) : (!2147483647))))));
        var_23 = ((1397728319 ? (min(((118 ? var_18 : var_1)), var_19)) : -7529357049936804436));
        var_24 |= (arr_0 [1]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_25 = (min(var_25, -7075471739515798574));
        arr_5 [i_1] = 12;
        arr_6 [i_1] [i_1] = -var_12;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 22;i_5 += 1)
                {
                    {
                        arr_16 [19] [i_3] = (max(((!(arr_13 [i_2] [i_3] [i_4] [8]))), ((!(arr_3 [i_5])))));
                        var_26 = (((max(((min(33521664, 9223372036854775804))), 0)) ^ (arr_3 [i_3])));
                    }
                }
            }
        }
        arr_17 [i_2] = ((!((((arr_7 [i_2]) ? (arr_7 [i_2]) : (arr_7 [i_2]))))));
        arr_18 [11] = 22;
        var_27 = (min(var_27, (((2147483647 ? (arr_8 [i_2]) : (((max(65535, 233)))))))));
        arr_19 [i_2] = (((((-(arr_14 [16] [16] [16] [i_2])))) ? ((232 ? 9223372036854775804 : 1)) : ((((((arr_10 [i_2] [i_2] [i_2]) <= var_18)) ? 0 : var_5)))));
    }
    var_28 *= 67106816;
    #pragma endscop
}
