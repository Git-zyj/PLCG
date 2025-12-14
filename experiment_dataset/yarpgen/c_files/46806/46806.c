/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46806
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-8976 - ((((!(-2147483647 - 1))) ? var_5 : (-8986 ^ 245)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_12 *= ((var_7 ? 5498579737295017056 : 301600051049861725));
        var_13 = (((((var_0 ? 85 : (arr_0 [i_0 + 1])))) ? 127 : 4096));
        arr_2 [i_0] [i_0] = ((((2187210564 ? var_9 : var_6))) ? 1 : ((1798126367 ? var_5 : 1466106043)));
        var_14 = ((var_7 ? (((var_2 ? 8965 : 4294967295))) : (((arr_0 [i_0]) ? var_3 : (arr_0 [2])))));
        var_15 = (max(var_15, (((4173573797 ? (arr_0 [i_0 + 3]) : -5783193327679563745)))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_11 [i_2] [i_2] = var_0;
                    var_16 = (min(var_16, (~var_10)));
                    arr_12 [4] = var_6;
                }
            }
        }
        arr_13 [i_1] = ((!(!var_7)));
    }
    #pragma endscop
}
