/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_10 += (((41 + 2) / ((((max((arr_4 [i_0]), 239))) ? (((107813101 ? 52 : 89))) : 2))));

                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    var_11 -= (max(((204 ? 7690107969645244996 : 1788852564)), 41));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] |= ((+(((arr_0 [i_1 + 1] [i_1]) ? -116 : 215))));
                                var_12 *= ((((((max(0, 16))) ? 2748366153 : ((2690128310 - (arr_12 [i_0] [i_0] [i_4]))))) - 4294967295));
                            }
                        }
                    }
                }
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    var_13 *= -16218;
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 7;i_7 += 1)
                        {
                            {
                                arr_22 [8] [i_1] [i_1 + 1] = ((-(((arr_14 [i_0 + 3]) + (arr_5 [i_1 - 1] [i_1 - 1])))));
                                var_14 += (136 + 16);
                                var_15 -= ((119 ? 7256610361147574411 : 250));
                            }
                        }
                    }
                    var_16 += ((((((52 * (arr_6 [i_0] [i_1]))) & (((((arr_0 [i_0] [i_1]) && (arr_2 [i_0 - 2] [i_1 + 1])))))))) ? ((3352651995 * (-7256610361147574412 >= 867261761))) : (((((max((arr_2 [i_0] [i_0]), (arr_9 [2] [0]))) > (((max(253, 8900)))))))));
                    var_17 &= ((((((~(arr_7 [i_0]))) ? (max((arr_2 [i_1] [i_1]), (arr_1 [i_0]))) : (((((arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]) || 7690107969645244996))))))));
                }
            }
        }
    }
    var_18 = ((-(((var_9 - 1745525795) - (((var_9 ? var_1 : 41)))))));
    var_19 = (min(var_19, (((((min(var_9, -var_5))) + (var_5 - var_8))))));
    #pragma endscop
}
