/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= ((((max(var_14, var_17))) ? (((var_10 - var_7) - (((var_3 ? var_13 : 2282))))) : ((var_7 ? var_16 : var_3))));
    var_20 = (max(var_20, var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_21 = (max(var_21, ((((!var_2) != (((98 && (arr_3 [i_1 + 1])))))))));
                                arr_16 [i_0] [i_1] [i_0] [i_1 + 2] = ((((((((arr_4 [i_3]) ? 109 : (arr_2 [i_0])))) == ((10546 ? -5763542957557797431 : -6816305779098553982)))) ? ((var_18 >> (103 - 86))) : (((arr_9 [i_1 - 1] [i_1]) ? ((var_12 ? 96 : 94)) : (!1)))));
                            }
                        }
                    }
                }
                arr_17 [i_1] = (max(30720, (6 != 109)));
                arr_18 [i_1] = (max(0, -2381451160862885235));
                arr_19 [i_0] [i_1] [i_0] = (~(max((arr_3 [i_0]), ((-(arr_5 [i_0]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                {
                    var_22 = ((((max((arr_26 [i_5]), var_14))) && (max((arr_26 [i_7]), var_11))));
                    var_23 = var_10;
                }
            }
        }
    }
    var_24 = (max(var_24, (((65 ? 1426272776 : -1845361565)))));
    #pragma endscop
}
