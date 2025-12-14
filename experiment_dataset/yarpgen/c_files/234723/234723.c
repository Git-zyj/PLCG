/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234723
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [1] = (max(((min((max(var_3, var_10)), (min(var_9, -1145593036483786797))))), (min((max(var_2, 2413)), ((var_10 ? -11246 : 5))))));
                    var_12 = (max(((max(var_0, var_5))), ((var_11 ? var_1 : var_1))));
                    arr_10 [i_2] [1] [i_2] [i_1] = min((min(((3 ? var_10 : var_9)), (max(var_11, var_6)))), 0);
                    arr_11 [i_2] [i_2] = (((!11245) ? (min((min(549224846812148958, var_3)), ((max(-2147483623, 84))))) : (min(8935141660703064064, var_4))));
                }
            }
        }
    }
    var_13 *= ((!(((((min(-16053, 549224846812148966))) ? (~var_9) : var_10)))));

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        arr_14 [i_3] |= ((((min((min(-2147483623, var_1)), ((var_11 ? -103 : var_4))))) ? ((((max(0, var_9))) ? -var_1 : (max(15724841538493080962, 511)))) : ((((min(var_4, var_9))) ? ((max(var_3, (-2147483647 - 1)))) : var_4))));
        var_14 = ((1 ? (min(((var_1 ? var_2 : var_0)), var_4)) : ((102 ? ((max(var_10, 0))) : var_2))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        var_15 = var_10;
                        arr_22 [i_4] [i_4] [i_6] [i_5] [i_4] [i_5] = var_1;
                        var_16 = ((!(((1 ? 14339687992504926084 : var_5)))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        arr_25 [1] = var_8;
        var_17 ^= ((-25856293 ? ((7119151686645856602 ? 2147483647 : var_10)) : var_7));
        var_18 = (127 ? var_7 : 0);
        arr_26 [i_7] = ((-236796891 ? var_4 : var_3));
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1)
    {
        var_19 = (min(var_19, ((min((((!(((1519429677783451236 ? var_0 : 103)))))), (min(((var_7 ? var_6 : var_6)), (((var_1 ? var_9 : var_9))))))))));
        var_20 ^= var_6;
        arr_30 [i_8] = ((!((min((max(16756, var_9)), (~3))))));
        var_21 = var_8;
        arr_31 [i_8] [i_8] = (max((((var_4 ? 0 : var_7))), -var_1));
    }
    #pragma endscop
}
