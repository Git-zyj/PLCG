/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19633
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= ((((min(var_4, var_1))) ? ((((((-2147483647 - 1) != var_2)) ? (((var_4 << (var_0 - 1738288398)))) : ((2130706432 ? var_11 : var_2))))) : (min(var_3, var_5))));
    var_13 &= (~var_10);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_14 = (((var_7 && -1173396489) || ((min((arr_5 [i_0] [i_1] [12] [i_0]), (arr_3 [i_1]))))));
                    var_15 = (!(!3470133002));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_16 = (max(((var_7 ? 1 : 1738872153)), (((~(arr_5 [i_1] [i_1] [i_2] [i_3]))))));
                                var_17 = (((arr_8 [i_4] [i_3] [i_2] [i_1]) > (min(var_9, (var_9 / 5180130586520469870)))));
                                var_18 = (-2991499197255337640 ^ 12);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
