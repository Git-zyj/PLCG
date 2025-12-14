/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47123
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47123 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47123
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = ((~((var_8 ? var_19 : var_7))));
                    var_21 = (((((-var_3 ? ((255 ? 250 : 240)) : var_17))) | var_5));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_22 = ((~((var_4 / ((var_17 ? 17905754753320789761 : var_13))))));
                                var_23 = (min(((((22 ? 4075214316 : -22697)) % 63397)), (min(255, 6))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (((((-var_18 ? (var_9 | var_10) : (!var_7)))) ? (((((1256081275 >> (211 - 208)))) ? ((6 ? 6 : 221)) : 85)) : var_4));
    #pragma endscop
}
