/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, (((((((var_8 || var_7) | (~var_2)))) ? ((((((653085192 ? var_6 : 122))) ? ((var_2 ? var_0 : var_10)) : ((var_10 ? var_3 : var_4))))) : var_7)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 &= ((~67108856) ? var_5 : ((((arr_1 [i_0]) - -1419442013))));

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        {
                            arr_14 [i_3] = ((-67108857 ? 5747354923372341990 : -67108856));
                            arr_15 [i_0] [22] [i_2] [0] [i_4] &= ((!(!1002957857489079424)));
                            var_13 += ((-((8 << (-84 + 142)))));
                        }
                    }
                }
            }
            var_14 = (min(var_14, (((var_9 ? var_0 : (arr_9 [i_0] [2] [i_1] [i_1 + 2]))))));
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        var_15 = (var_2 ? -31 : (~-1419442012));
        var_16 = ((!var_1) ? (var_6 | var_9) : ((var_7 ? (arr_9 [19] [i_5] [i_5] [i_5]) : (arr_12 [i_5] [13] [i_5] [i_5] [i_5]))));
        arr_18 [i_5] = (123 ? (arr_12 [i_5] [i_5] [i_5] [i_5] [i_5]) : -16);
    }
    var_17 = (~((((!var_0) || (!0)))));
    var_18 = (((var_5 || 9223336852482686976) && var_4));
    #pragma endscop
}
