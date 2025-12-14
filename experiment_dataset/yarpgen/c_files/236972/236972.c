/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_13 *= ((((((2666759956 - (arr_3 [i_0] [i_1] [i_1]))) ? ((~(arr_3 [i_0] [i_1] [i_1]))) : ((var_3 ? (arr_3 [i_1] [i_1] [i_1]) : 37562))))));
                var_14 = (min(var_14, (((~(((arr_0 [i_0]) & (max((arr_0 [i_0]), var_10)))))))));
                var_15 |= ((!((!(((arr_2 [18] [18] [7]) || var_8))))));
            }
        }
    }
    var_16 = (max(var_16, 2016));
    var_17 = var_6;
    var_18 = (max(var_18, (((~(((1 > ((var_9 ? var_10 : 256450193105501591))))))))));
    var_19 = ((var_4 || ((!(((var_0 ? var_4 : 284887001128538273)))))));
    #pragma endscop
}
