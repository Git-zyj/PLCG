/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22732
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_0 % 1410969889) ? ((((!17954526165427291761) != var_16))) : ((((-127 - 1) >= var_0)))));

    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        var_19 *= (max(-31413, (min(1410969886, -71))));
        var_20 ^= 5516964926106193430;
    }
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        var_21 = -1410969875;
        var_22 = (((arr_2 [i_1]) | -1410969893));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 23;i_2 += 1)
    {
        arr_7 [i_2] = (227 != -1410969885);
        arr_8 [i_2] [i_2] = (((arr_1 [i_2 - 1]) ? (arr_1 [i_2 + 1]) : 29));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_23 = ((-1410969889 ? 268435455 : (arr_9 [i_3] [i_3])));
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 7;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 11;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        arr_23 [i_3] [i_3] [6] [6] = ((35 + (arr_21 [i_3] [i_3] [i_4] [i_4 + 1] [i_4 + 1])));
                        var_24 = ((!(arr_20 [i_4] [i_4 - 1] [i_5] [i_6] [i_6])));
                        var_25 = (!53380);
                    }
                }
            }
        }
    }
    var_26 = ((((((11645067616270839415 ^ var_7) & 59570))) ? (((~((min(-22, var_1)))))) : (min((~var_14), (~8)))));
    #pragma endscop
}
