/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = 31744;
                var_18 = ((var_5 ? var_3 : var_12));

                /* vectorizable */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_19 = ((0 ? (arr_5 [i_2 - 1] [i_2 - 1] [i_2 + 1]) : (arr_5 [i_2 + 1] [i_2 - 1] [i_2 + 1])));
                    var_20 = var_8;
                    var_21 = (((1 << 1) && 15070525898007061381));
                }
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    var_22 = (arr_11 [i_0] [i_1] [i_3] [i_3]);
                    var_23 = ((((-var_13 + 2147483647) >> (var_2 - 98))));
                    var_24 = (max(var_24, ((min((arr_6 [i_3] [i_3] [i_3]), ((19397 ? (arr_9 [i_0] [i_3]) : (arr_1 [i_0]))))))));
                    var_25 = ((~(1 & 1)));
                }
            }
        }
    }
    var_26 = (max(var_10, (min(1048574, -4077325905722672183))));
    #pragma endscop
}
