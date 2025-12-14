/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, var_17));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_21 = 75;
                    var_22 = ((var_7 ? (arr_4 [i_0]) : var_5));
                    var_23 = (-120 / -848331922731725300);
                }
                /* LoopNest 2 */
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_24 = (max(var_24, (arr_0 [i_0])));
                            var_25 = (((max(var_12, (arr_14 [i_0])))) ? (((arr_7 [8] [6] [i_4]) ? 18408743566921142155 : (min(var_11, -143)))) : (max((arr_10 [i_0] [i_3]), (arr_1 [i_0] [i_4]))));
                            arr_16 [i_3] [i_3] [i_3] [i_4] [i_4] |= (var_18 >= 110);
                        }
                    }
                }
            }
        }
    }
    var_26 &= var_5;
    var_27 |= var_6;
    #pragma endscop
}
