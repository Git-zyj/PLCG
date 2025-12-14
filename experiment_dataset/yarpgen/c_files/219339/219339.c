/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219339
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 = (min(var_10, (((((var_4 ? var_2 : var_0))) | var_8))));
        var_11 = ((((var_4 ? var_9 : var_0))) ? ((var_2 ? var_4 : var_7)) : (var_7 < var_5));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_12 = (var_2 < ((((var_9 || (((var_4 ? var_3 : var_1))))))));
        var_13 = min((((var_0 ? var_5 : var_0))), (((((var_5 ? var_2 : var_8))) ? (((var_8 ? var_4 : var_0))) : var_7)));
        var_14 = (min(var_14, (17592186044160 * -47)));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_15 = (max(var_15, ((((((-((var_2 ? var_6 : var_2))))) ? ((-var_8 ? (max(var_2, var_6)) : (var_2 + var_5))) : (((((var_9 ? var_9 : var_3))) ? (((var_6 ? var_7 : var_3))) : ((var_8 ? var_1 : var_8)))))))));
        var_16 = ((((max((((16011109678168416375 ? 47 : -2))), (max(var_9, var_7))))) ? ((min(var_2, var_9))) : ((2435634395541135240 ? 5892570284917370453 : 57))));
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 20;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        var_17 = ((((((var_5 ? var_7 : var_6)) - (!var_0))) ^ (min(((var_7 ? var_8 : var_4)), ((var_9 ? var_8 : var_8))))));
                        var_18 = ((((min(var_6, var_1))) ? ((((min(28199, 56444))) ? var_1 : (!var_7))) : (((var_7 >= var_4) ? (~var_6) : (!var_2)))));
                        var_19 = ((-(((((0 ? 1558043744 : 127))) ? (min(var_7, var_3)) : ((var_1 ? var_0 : var_7))))));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1)
                    {
                        arr_20 [i_3] [i_3] = var_7;
                        arr_21 [i_2] [i_3] [i_6] [i_6] = (max(((((((18446744073709551595 ? 435297552 : 12288))) ? (var_2 >= var_5) : 164))), ((var_1 ? (((-25672 ? 1698228978 : 4134925132))) : (var_0 + var_8)))));
                        arr_22 [i_2] [i_3 + 1] [i_3] = (max(((var_8 ? ((max(var_4, var_4))) : 6407)), var_3));
                        var_20 = (max(6406, 997479990));
                    }
                    var_21 = ((!(((-((var_6 ? var_4 : var_5)))))));
                }
            }
        }
    }
    var_22 = (min(var_22, (((-((((((var_2 ? var_0 : var_7))) < var_1))))))));
    var_23 = (max(var_23, ((((min(var_0, (var_8 / var_1)))) ? ((((min(var_2, var_3)) * var_4))) : ((var_1 ? var_9 : ((var_2 ? var_9 : var_8))))))));
    var_24 = (((((((max(var_9, var_8))) ? var_9 : (max(var_8, var_0))))) ? var_9 : (((((var_6 ? var_8 : var_0))) ? (var_8 - var_9) : ((var_3 ? var_1 : var_3))))));
    #pragma endscop
}
