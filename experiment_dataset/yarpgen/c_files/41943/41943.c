/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                var_17 = ((!(((1 ? 1 : -1)))));
                                var_18 += (((((10600073782235935955 ? 3 : 1))) ^ (32767 | -2907)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_19 = var_9;
                            var_20 = (((+-73) ? -57398 : ((((~7887) != (((arr_16 [1] [i_0] [i_1] [i_5] [i_1] [i_6]) ? var_12 : var_12)))))));
                            var_21 = ((((((-6 + 2147483647) << (((-764498366175306151 + 764498366175306159) - 8))))) ? (((57649 & (arr_8 [i_5 - 1] [i_5] [i_5] [i_5 + 1])))) : (max(17455, -637130323990657872))));
                        }
                    }
                }
            }
        }
    }
    var_22 = ((+(max((var_13 <= 51431), var_6))));
    #pragma endscop
}
