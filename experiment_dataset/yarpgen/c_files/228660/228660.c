/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= ((~((((((-7205690036718107522 + 9223372036854775807) >> (var_8 - 7075947640078600917))) <= var_12)))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_14 = (max(var_14, ((~(+-3425648968951086858)))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_10 [i_2] [i_0] [i_0] [i_0 + 2] = ((~var_4) ? (((((4951717043250703840 << (((((arr_5 [i_0] [i_2]) + 6160900656483571067)) - 23))))) ? var_9 : (arr_8 [4]))) : (-9223372036854775807 - 1));
                    var_15 = min(-9223372036854775788, ((((((arr_9 [i_0] [i_0 + 3] [i_0]) ? (arr_4 [i_0]) : (arr_6 [i_1 + 2] [i_2])))) ? (arr_3 [i_0] [13] [i_2]) : (arr_0 [i_0 + 3] [i_0 + 3]))));
                    arr_11 [i_2] [i_0] [i_0 + 2] = (((min((arr_5 [i_0] [i_1 - 3]), 2159446664980984116))) ? -2159446664980984113 : 5662607425908453626);
                    var_16 = arr_2 [i_0] [i_0];
                }
            }
        }
    }
    var_17 = (~(((-8995902543936771179 <= 2397333961956081571) ? (min(var_10, var_7)) : ((-4940049165526122537 ? var_2 : var_3)))));
    #pragma endscop
}
