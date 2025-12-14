/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_11 = ((~(arr_3 [i_0 - 1] [i_1 - 1] [i_0 + 3])));
            var_12 = ((((((~var_9) ? var_5 : var_5))) ? var_3 : ((min((arr_2 [i_1 - 2] [i_0 + 1] [i_0]), 632588309)))));
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_13 = (max(var_13, 3271523829262066696));
                        arr_8 [i_0] [i_1 - 1] [i_3] [i_3] [i_3] = ((~(var_6 > var_5)));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            var_14 = (min(var_14, ((min((((~((min((arr_9 [8]), -10)))))), ((7006474174737606412 ? -7006474174737606437 : var_2)))))));
            var_15 = min(-var_2, (~-7006474174737606462));
            var_16 = ((~(((!(arr_4 [i_0] [i_0 + 1] [i_0 + 2] [i_0 + 1]))))));
        }
        var_17 = (((!var_6) ? ((var_8 ? (arr_0 [i_0 + 2]) : (arr_0 [i_0 + 1]))) : (arr_1 [i_0])));
        var_18 = (~var_4);
        arr_11 [i_0] = (min(((50 ? ((274877890560 ? -1 : 11023)) : 23706)), 0));
    }
    var_19 = ((var_1 ? var_0 : var_1));
    #pragma endscop
}
