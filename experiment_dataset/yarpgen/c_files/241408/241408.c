/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((var_7 ? ((min(var_4, var_4))) : var_2));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            arr_5 [i_0 - 2] [i_0 - 1] [i_0 + 3] = (max(((max((var_6 + 1), 2616))), (max(((min(var_6, -1163000323))), ((var_3 ? var_7 : var_0))))));
            arr_6 [i_1] [i_1] [i_0] &= ((max(((max(var_9, 77))), var_2)));
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            arr_9 [i_0] [i_2] = (((((var_6 ? (max(var_3, var_1)) : ((max(13322, var_6)))))) ? (min(((min(var_7, var_2))), 130048)) : (max(-13343, (min(var_6, 18446744073709551612))))));
            arr_10 [i_0] |= (max(-var_6, ((((0 ? 18446744073709551606 : var_6)) >> (((max(var_7, var_2)) - 3970240417))))));
            /* LoopNest 2 */
            for (int i_3 = 2; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {
                        arr_15 [i_0] [i_0] = var_4;
                        var_11 = -13337;
                        var_12 = (max((((((max(13343, var_5))) && ((min(var_3, var_3)))))), (min(6108579139321250704, (max(var_0, 10))))));
                        arr_16 [i_4] [0] [i_2] [9] [i_0] = (((((max(15977, var_0))) ? var_9 : (max(2426663954307535817, 2426663954307535810)))));
                    }
                }
            }
        }
        var_13 = (max(var_13, (~var_6)));
        arr_17 [i_0 + 2] = (min((max(-721820372, 49558)), ((min(var_8, 4944)))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        arr_21 [i_5] = (13365 < var_7);
        var_14 = var_7;
    }
    var_15 &= (max(((max(((min(56, var_8))), (~var_8)))), (max(var_8, (max(var_5, var_7))))));
    /* LoopNest 3 */
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 0;i_8 += 1)
            {
                {
                    arr_32 [i_6] = ((max(((max(var_6, 13343))), (~var_7))));
                    var_16 = (1198815411 - var_5);
                }
            }
        }
    }
    #pragma endscop
}
