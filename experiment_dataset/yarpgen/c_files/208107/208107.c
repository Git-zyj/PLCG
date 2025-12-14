/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = ((0 && (((-1 * (((arr_0 [i_0]) / -110)))))));
                var_16 = 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            arr_8 [i_2] = (((min((((-(-127 - 1)))), (((arr_0 [i_0 + 3]) / 1))))) ? ((((((arr_1 [1]) * 1))) ? (arr_6 [i_1 - 1] [i_3] [i_2] [i_0]) : (arr_6 [i_0 - 1] [i_1] [i_2] [i_1 - 2]))) : ((((((arr_0 [13]) ? var_11 : (arr_7 [i_0] [6] [i_2] [i_2] [i_3])))) ? (var_10 / 16777216) : ((max(var_0, var_9))))));
                            var_17 = (min((arr_5 [i_2] [i_2]), var_11));
                            var_18 *= (max((((-(((arr_0 [1]) ? (arr_6 [i_0] [i_1] [i_1] [i_3]) : 65535))))), (var_2 - 1)));
                        }
                    }
                }
            }
        }
    }
    var_19 = (max(((((max((-127 - 1), var_11))) / 1)), (((((-127 - 1) >= var_14))))));
    #pragma endscop
}
