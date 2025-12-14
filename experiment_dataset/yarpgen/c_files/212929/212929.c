/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((~var_1) ? ((var_18 ? var_14 : var_13)) : (~var_6)))) ? (((~(~var_18)))) : ((~((var_11 ? var_3 : var_1))))));
    var_20 = ((0 ? var_9 : var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_0] = ((((!(((var_18 ? var_16 : var_3))))) ? (((((var_5 ? var_5 : var_5))) ? var_1 : var_14)) : (~var_10)));
                    var_21 = (((((~(var_1 != var_10)))) ? var_4 : (((~var_6) ? ((var_7 ? var_9 : var_13)) : (((var_0 ? var_8 : var_2)))))));
                    var_22 = ((((((var_2 ? var_2 : var_16))) ? (~var_14) : ((var_10 ? var_17 : var_8)))));
                    arr_7 [i_0] = ((var_5 ^ (((((-4651744264177299765 ? -1005812610448461270 : 3))) ? (var_7 ^ var_10) : (((var_15 ? var_1 : var_12)))))));
                }
            }
        }
    }
    #pragma endscop
}
