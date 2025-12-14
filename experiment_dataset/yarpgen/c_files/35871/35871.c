/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((((var_9 ? ((37614 ? -1 : var_7)) : var_0))) < (var_9 ^ var_4));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_1] [i_1] [i_2 + 3] = (((max((arr_10 [i_0] [i_0] [i_1] [i_1] [i_2 + 2] [i_3]), ((var_3 ? (arr_1 [i_0 + 1]) : var_12)))) - 1));
                            var_15 = (((((37614 / ((max(0, 37594)))))) ? (8787503087616 / var_9) : ((((arr_2 [i_0 + 2]) / (arr_2 [i_0 + 2]))))));
                            arr_13 [i_0 + 1] [i_0 + 1] [i_2] [i_3] = -29;
                        }
                    }
                }
                var_16 &= (((((max(var_12, (arr_7 [i_0] [i_0] [i_0]))) >> (-3300762725089452699 - 88))) > (((((var_10 <= var_7) || ((((-893295882 + 2147483647) >> (((arr_1 [i_1]) - 5008212365331614420)))))))))));
                arr_14 [i_1] = (~((var_1 ? (arr_6 [i_0] [i_0 - 1] [i_0 + 1] [i_0]) : var_10)));
            }
        }
    }
    var_17 *= var_13;
    #pragma endscop
}
