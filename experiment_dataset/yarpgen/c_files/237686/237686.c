/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                var_10 = (((((~((max((arr_5 [i_1 + 1] [i_0]), var_3)))))) ? (~13729) : (min((((arr_3 [i_1]) ? var_4 : var_5)), (((arr_0 [i_0]) ? 7656 : var_2))))));
                var_11 = (((~51806) ? (var_2 ^ 13729) : (+-41730)));
                arr_6 [i_0] [i_1] [i_1] = ((-60749 && ((max(var_0, var_3)))));
                var_12 = (((31527 && 9863) ? ((var_3 >> (((!(arr_4 [9] [i_1] [i_1])))))) : ((max(var_2, var_2)))));
            }
        }
    }
    var_13 |= var_4;
    #pragma endscop
}
