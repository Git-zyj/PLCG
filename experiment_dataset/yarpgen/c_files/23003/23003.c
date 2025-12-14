/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = arr_1 [i_1] [i_0];
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_1] [i_1] [i_1] [i_0] = 64180;
                            var_19 = (((!3661) || (((((max(0, 0))) ? 65535 : (((arr_1 [8] [i_3]) ? 11463 : 36697)))))));
                        }
                    }
                }
                var_20 *= ((var_12 ? (((arr_0 [i_0 - 4]) << ((((28839 ? (arr_2 [i_0 - 4] [i_0] [i_1]) : (arr_0 [i_0 - 4]))) - 5100)))) : (arr_3 [i_0 - 3] [i_0 + 1])));
                var_21 = (min(var_21, (!9513)));
            }
        }
    }
    var_22 = ((~(((var_16 && var_3) & (19832 ^ 9513)))));
    var_23 = (2212 % 44865);

    for (int i_4 = 4; i_4 < 12;i_4 += 1)
    {
        var_24 = var_1;
        var_25 ^= ((((((((28838 ^ (arr_2 [i_4] [i_4 + 1] [2])))) ? 65535 : ((((arr_6 [i_4] [i_4] [i_4] [22]) <= (arr_5 [i_4]))))))) ? ((((11 & (arr_4 [i_4] [i_4]))) | (((arr_3 [i_4] [i_4]) ? 24881 : 9672)))) : (max((!65535), (~36680)))));
    }
    #pragma endscop
}
