/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_13 -= (max((((!(arr_0 [i_0] [i_0])))), var_6));
        var_14 ^= ((~(arr_0 [i_0] [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 15;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_1] = (max(262142, (((262141 ? 5053 : 142)))));
                        var_15 = (min(var_15, 98));
                        arr_9 [i_0] [i_1] [i_1] [i_3] = ((~((~(!8060450944205697851)))));
                        arr_10 [i_2] [i_1] [i_0] = ((+((+(max((arr_4 [i_1]), 1))))));
                    }
                }
            }
        }
    }
    var_16 = var_1;
    var_17 = var_6;
    var_18 = var_12;
    #pragma endscop
}
