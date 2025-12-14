/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((98 ? 1 : var_4));
    var_15 = var_0;
    var_16 = var_5;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_17 = var_13;
        arr_4 [i_0] [i_0 - 1] = ((((((((var_1 ? var_6 : var_3))) ? var_13 : ((var_3 ? var_0 : var_3))))) ? var_12 : var_12));
    }
    for (int i_1 = 2; i_1 < 20;i_1 += 1)
    {
        var_18 = ((((((((var_2 ? var_5 : var_1))) ? var_11 : var_4))) ? ((((((var_13 ? var_8 : var_2))) ? ((var_10 ? var_7 : var_7)) : (((var_2 ? var_0 : var_0)))))) : var_10));
        var_19 *= var_7;
        var_20 += ((((((((var_5 ? var_9 : var_0))) ? (((var_1 ? var_5 : var_13))) : var_3))) ? var_10 : var_8));
        var_21 = var_6;

        for (int i_2 = 3; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_22 = (71 ? -6491038829416548422 : 3684484750710496546);
                            var_23 = (min(var_23, var_2));
                            var_24 = ((var_2 ? (((((var_5 ? var_6 : var_6))) ? var_10 : ((var_0 ? var_3 : var_1)))) : (((((var_7 ? var_11 : var_8))) ? ((var_1 ? var_0 : var_10)) : var_13))));
                        }
                    }
                }
            }
            var_25 = (min(var_25, (((((((((15240 ? var_10 : var_12))) ? var_4 : 233))) ? var_4 : ((var_9 ? var_5 : ((var_3 ? 8675 : 3072609995870334484)))))))));
            arr_21 [i_1] = ((var_1 ? var_8 : var_10));
            var_26 += ((((((((-3072609995870334484 ? var_11 : var_8))) ? var_7 : var_5))) ? var_3 : var_0));
            arr_22 [i_1] [11] = var_1;
        }
    }
    var_27 = ((var_3 ? ((((((var_7 ? var_8 : var_4))) ? var_13 : var_2))) : ((var_5 ? ((var_1 ? var_4 : var_6)) : var_10))));
    #pragma endscop
}
