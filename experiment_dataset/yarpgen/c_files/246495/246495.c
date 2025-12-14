/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246495
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246495 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246495
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_6);
    var_15 = ((-(((~-8339) + -138))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((!((((!1969683725) ? (((arr_0 [i_3]) ? (arr_5 [i_4] [0]) : var_6)) : ((-1969683726 ? 6175 : var_6))))))))));
                                var_17 = (min(var_17, ((((!var_5) ? (((((~(arr_11 [i_4 - 1] [1] [i_3] [1] [5] [i_0 + 1] [i_0])))) ? ((-3624418977099259667 ? var_13 : (arr_14 [i_0 + 1] [17] [i_2] [17] [i_2] [12] [i_4]))) : (((arr_3 [i_3] [i_1]) ? 2025532518 : -563420678)))) : ((~(!2663974485))))))));
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1] &= (!((((~1630992819) ? (((!(arr_1 [1] [10])))) : (!var_0)))));
                arr_16 [i_0 + 1] [15] [i_1] &= ((((((~-306836567700061516) ? 32767 : 255))) ? ((((!(var_4 + var_1))))) : ((~((-1 ? 2663974485 : 3416944428))))));
            }
        }
    }
    var_18 = (min(var_18, (((var_2 ? (((-(var_13 + var_1)))) : var_11)))));
    #pragma endscop
}
