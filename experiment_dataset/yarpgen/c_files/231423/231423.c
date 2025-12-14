/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_14);
    var_21 *= ((var_14 ? (((((max(var_12, 5345680440374913029))) ? var_16 : var_1))) : (!177)));
    var_22 = ((var_12 != (((-(!177))))));
    var_23 *= ((var_0 - ((var_6 << (93 - 46)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_9 [i_0] [i_0] [i_0] = 115;
                        arr_10 [7] [i_1] [i_0] [i_3 - 1] = var_1;
                        arr_11 [i_0] [6] [i_1 - 1] [i_0] = ((min((arr_4 [i_3 + 2] [i_0] [i_0] [i_1]), (arr_4 [i_1] [i_0] [i_0] [i_0]))));
                    }
                }
            }
        }
        var_24 ^= var_4;
    }
    for (int i_4 = 0; i_4 < 16;i_4 += 1)
    {
        var_25 = arr_12 [i_4];
        var_26 = var_10;
    }
    #pragma endscop
}
