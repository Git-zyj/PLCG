/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, 119));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (min(var_11, ((((-125 ? ((min(117, 79))) : var_5))))));

                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_12 = ((~(((!(var_5 || var_6))))));
                        var_13 += var_6;
                        var_14 = ((((((((113 ? -119 : 62))) ? ((106 ? var_3 : 117)) : ((-(arr_0 [i_0 - 1] [i_0 - 1])))))) ? -var_8 : (arr_4 [i_0 - 1] [i_0 - 1])));
                    }

                    for (int i_4 = 2; i_4 < 19;i_4 += 1)
                    {
                        var_15 += ((((((var_5 ? var_5 : var_4)) < ((-17 ? 142 : 142)))) ? var_6 : var_6));
                        var_16 += ((var_0 && (~-22)));
                        var_17 ^= (min(((((!95) ? (arr_11 [i_0] [i_0 - 1] [i_0] [i_0]) : (~47)))), (((arr_4 [i_4] [i_0]) & var_2))));
                        var_18 = (min((arr_3 [3] [11]), 1));
                    }
                }
                var_19 -= (~100);
            }
        }
    }
    var_20 = var_1;
    #pragma endscop
}
