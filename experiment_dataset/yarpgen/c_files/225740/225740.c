/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max(var_16, (((2305521629 ? 57016 : -var_1)))));
    var_17 = var_1;
    var_18 = ((var_12 || (((var_13 << (((5 * var_0) - 1209)))))));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_19 = ((var_8 ? (((var_3 * 115) ? (~127) : 15669965068021152756)) : (((max((arr_0 [i_0]), 13))))));
        var_20 = 238;
        var_21 = -4347852085187621416;
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        arr_4 [i_1] = (min(var_5, 18446744073709551615));
        arr_5 [i_1] [i_1] = (((((var_10 ? (arr_2 [i_1]) : var_3))) + ((~(~20)))));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_22 ^= ((((((~var_12) ? -4991248079605799725 : (1411657722 * 8523)))) ? (((~1) ? (((8527 ? var_9 : 3599420039))) : (arr_7 [i_2]))) : (((var_10 ? ((min(-32762, var_6))) : 16315)))));
        arr_9 [i_2] |= ((-(arr_3 [i_2])));
        var_23 = (((((8545 ? (arr_2 [i_2]) : var_8))) ? (min(var_5, 288230376151711743)) : (arr_2 [i_2])));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_24 = (min((min(var_15, -5)), (((~(arr_10 [i_3] [i_3]))))));
        var_25 = 87;
        var_26 = 46;
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 22;i_6 += 1)
                {
                    {
                        arr_21 [i_3] [i_3] [i_3] [i_3] = ((2864066864 ? ((var_15 ? (arr_12 [i_3]) : (arr_17 [i_3] [i_3] [i_5] [i_6]))) : (max((arr_12 [i_3]), -3489499542025518693))));
                        var_27 = (max(var_27, var_9));
                        arr_22 [i_3] [i_3] [i_3] [i_4] [i_4] [i_3] = (arr_15 [i_3] [i_3] [i_3]);
                    }
                }
            }
        }
    }
    var_28 *= (~4194288);
    #pragma endscop
}
