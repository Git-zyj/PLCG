/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= (((!-1) - (min((min(48409, var_2)), (var_0 <= var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            var_11 = ((+((max((arr_0 [i_0 + 2] [i_0 + 2]), (arr_3 [i_0 + 2] [i_0 + 2]))))));
                            var_12 = 1;
                        }
                    }
                }

                /* vectorizable */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    var_13 = (arr_3 [i_4] [i_4]);
                    var_14 = -8852212105239887089;
                }
            }
        }
    }
    var_15 = ((~(((8852212105239887088 != var_0) * ((max(var_9, var_7)))))));

    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        var_16 = ((((((-1 ? (arr_12 [i_5]) : 16596981904791944129)))) + (((min(9223372036854775806, var_6)) / ((min((arr_12 [i_5]), 63)))))));
        var_17 = (arr_13 [i_5]);
    }
    #pragma endscop
}
