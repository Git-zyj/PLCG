/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                {
                    var_10 = 33554431;
                    arr_9 [i_0] [i_0] = (1 - 5);
                    var_11 = (max(var_11, ((((max(18446744073709551615, (arr_5 [i_0] [i_2 + 2]))) * (((((max(13, 1))) >> (((12 | var_7) - 105))))))))));
                }
            }
        }
    }
    var_12 &= var_2;
    var_13 = (((((119 - 13) << (var_7 - 81))) | ((~(0 && var_2)))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_14 = (max(var_14, (((-421817691 <= (arr_11 [i_3]))))));
        var_15 = (max(var_15, (((-(arr_8 [i_3] [i_3]))))));
        arr_12 [8] = (((arr_8 [i_3] [i_3]) ? ((var_1 ? 21 : 18446744073709551615)) : ((((arr_10 [i_3]) / 5514728716349478744)))));
        arr_13 [i_3] &= (arr_6 [4] [i_3] [i_3]);
        var_16 |= (arr_3 [i_3] [i_3]);
    }
    #pragma endscop
}
