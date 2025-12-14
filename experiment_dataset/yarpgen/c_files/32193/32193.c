/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 -= (min(((((arr_10 [i_0]) | (arr_1 [i_0] [i_0])))), (!var_9)));
                                var_21 = (max(var_21, (((((~(!34410)))) ? (((!(((var_9 ? 31126 : (arr_9 [20] [14] [i_0]))))))) : 31126))));
                                arr_14 [i_2] [i_2] [i_2] [i_2] [i_2] = (max(-1584334981, var_9));
                            }
                        }
                    }
                    var_22 = ((((arr_12 [i_0] [i_0] [i_1] [i_1] [i_0]) | -24)));
                }
            }
        }
    }
    var_23 |= (((var_6 % var_12) ? ((((1302399102 | var_9) + 3))) : ((-517837097 ? var_0 : (~34426)))));
    #pragma endscop
}
