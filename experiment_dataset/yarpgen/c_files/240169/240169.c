/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((max(var_6, (-1767925259125991005 ^ 1298470338176251210))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = ((1767925259125991004 % (~var_2)));
                arr_4 [i_0] [i_1] [i_0] = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) && var_6));
                arr_5 [i_0] [i_0] = var_5;
            }
        }
    }
    var_20 = (((((((-6393117035141091878 ? 1767925259125991012 : -30719))) && ((min(29586, 11))))) ? 1826664226 : -1767925259125991023));
    var_21 = var_8;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            {
                var_22 ^= ((((max((arr_6 [6]), (arr_9 [i_2] [i_3] [i_2])))) ? (min((max(1767925259125991022, -1767925259125991023)), (-1767925259125991023 % -2))) : (((var_10 * (arr_2 [i_2] [6]))))));
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 9;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_23 = (!(arr_10 [i_5 + 1]));
                                arr_22 [i_2] [i_3] [i_5] [i_2] = var_8;
                            }
                        }
                    }
                }
                var_24 = (((((((12275454379887371056 ? var_9 : -10521)) | (~-24167)))) ? (((-1767925259125991023 ? (arr_2 [i_2] [i_2]) : var_13))) : ((((arr_7 [i_2]) ? (arr_3 [i_2] [i_2]) : (arr_3 [i_2] [i_2]))))));
                arr_23 [i_2] = (12275454379887371056 != 82);
                var_25 = (((((var_15 << (((arr_9 [i_2] [i_3] [i_2]) - 4623699983446608351)))) << (((min(var_1, var_14)) + 3904229409626595138)))));
            }
        }
    }
    #pragma endscop
}
