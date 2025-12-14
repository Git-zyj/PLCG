/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_12;
    var_19 = (min(6600235345172291469, (max(((var_11 ? 32767 : 8964772408654891127)), var_8))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = (-4 | 222);

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_21 = (((arr_2 [i_1] [i_1] [i_0]) || ((((arr_2 [i_1] [i_0] [i_0]) ? (arr_3 [i_1] [i_1] [i_0]) : (-2147483647 - 1))))));
            var_22 = (arr_0 [i_0]);
            var_23 = (-2147483647 - 1);
            var_24 = ((246 % (max((arr_0 [i_0]), (arr_0 [i_1])))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_25 = ((~(arr_5 [i_0] [i_2] [i_0])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 14;i_4 += 1)
                {
                    {
                        var_26 ^= var_1;
                        var_27 = arr_0 [i_0];
                        var_28 = ((((((((min(var_9, (-2147483647 - 1)) + 2147483647)) + 2147483647)) << (121 - 121)))));
                        var_29 = ((7 ? ((((((457358809 ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : var_15))) == var_10))) : (!224)));
                    }
                }
            }
            var_30 = (min(var_0, (max(((var_15 ? (arr_2 [i_0] [i_2] [i_2]) : var_17)), var_2))));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_31 ^= (arr_3 [i_5] [i_5] [i_0]);
            var_32 &= (arr_15 [i_0] [i_0] [i_0]);
            var_33 = var_7;
        }
        var_34 = ((576456354256912384 & ((max((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), 16)), (var_5 * var_7))))));
        var_35 = var_10;
    }
    #pragma endscop
}
