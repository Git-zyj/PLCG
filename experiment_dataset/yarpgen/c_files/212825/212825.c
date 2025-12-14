/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (arr_2 [i_1]);
                var_13 = var_1;
                var_14 -= (arr_4 [10] [10]);
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_15 = (min(var_15, var_0));
        arr_8 [i_2] = (max(((((arr_6 [i_2] [i_2]) ^ -17410))), (((arr_7 [i_2] [i_2]) ? ((min((arr_6 [i_2] [i_2]), -28676))) : (-2147483647 - 1)))));
        var_16 = (min(var_16, var_12));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 21;i_5 += 1)
                {
                    {
                        arr_15 [i_4] = 28685;
                        var_17 = (min((((((arr_13 [i_2] [i_2] [i_3] [i_4] [5]) ? var_5 : 6249108573721719737)))), (var_6 * -4504003667869493511)));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
    {
        var_18 = 120;

        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            arr_22 [i_6] [16] = ((!((!(arr_12 [i_6])))));
            var_19 = (arr_10 [i_7] [i_6]);
        }
    }
    for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
    {
        arr_25 [i_8] = (min((arr_12 [i_8]), ((18019 == (min(2147483647, 372652724))))));

        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            arr_28 [i_8] [i_9 + 4] = (arr_13 [i_8] [1] [i_8] [1] [i_9 + 1]);
            arr_29 [i_8] [i_8] = ((((~var_4) ? (((3458764513820540928 > (arr_13 [i_8] [i_9 - 1] [i_8] [i_9] [i_9 + 2])))) : ((2147483647 ? (arr_19 [i_8] [i_8]) : (arr_24 [i_8]))))));
        }
        var_20 &= (((((4908940823209120418 != 59624) << (var_4 - 15779))) << (((arr_16 [i_8]) + 518207201))));
    }
    var_21 = var_12;
    var_22 = var_8;
    #pragma endscop
}
