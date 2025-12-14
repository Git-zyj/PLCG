/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!-var_4);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = ((~(((max(var_9, var_2))))));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        var_16 = (max(var_16, (((1 ? (((!(((144784738 ? 1 : 82)))))) : 1)))));
                        var_17 = (((((var_6 ? var_2 : var_5))) == (min(-74, 376613780299277816))));
                        var_18 = (max(var_18, var_9));
                        arr_9 [i_3 - 1] [i_3 - 1] [i_0] [i_3 + 1] = ((-var_2 ? ((var_1 ? -var_0 : ((var_8 ? var_3 : 0)))) : ((~((2362 ? var_8 : 82))))));
                    }
                    arr_10 [i_0] [i_1] [i_0] [10] = (((((var_5 ? -88 : ((var_7 ? var_3 : var_8))))) ? var_6 : ((((max(var_4, 65535))) ? ((min(584, 12288))) : ((165 ? var_8 : 1))))));
                }
            }
        }
        arr_11 [i_0] = (1 ? -1 : 39550);
    }
    var_19 = (min(var_19, ((((((var_11 ? var_0 : ((var_12 ? var_6 : var_1))))) ? (((((4032 ? var_5 : 584))) ? -var_12 : ((var_9 ? var_12 : var_5)))) : (((((var_5 ? var_6 : var_3))) ? ((var_4 ? var_8 : var_3)) : ((var_7 ? var_12 : var_4)))))))));
    var_20 = (((~var_13) ? var_6 : ((max(var_5, var_10)))));
    #pragma endscop
}
