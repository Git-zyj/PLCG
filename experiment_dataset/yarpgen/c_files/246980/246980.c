/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246980
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = max(((max((max(150, 2855518039)), 2855518039))), ((max(2855518046, var_15))));
    var_18 = ((var_7 == (max(var_0, 1439449250))));
    var_19 = (((((var_0 ? (~1439449257) : (1439449239 >= 1439449252)))) != ((((max(2855518039, 2855518039))) ? 1439449254 : (var_14 & 1439449274)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] = ((var_12 / 2855518021) ? (((((arr_7 [i_0] [i_1] [i_2]) ? var_11 : 2855518043)) & (arr_3 [i_2]))) : (1439449223 < 1439449250));
                    var_20 = ((var_1 ? (((max((!2855518047), (2855518055 < 1439449272))))) : ((-2855518045 << (((2855518072 * var_10) - 1241277101))))));
                    var_21 = (min((arr_4 [i_2]), (((!(arr_1 [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_22 = 2855518011;
                                var_23 = (arr_2 [i_0] [i_0]);
                            }
                        }
                    }
                    var_24 = (arr_5 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
