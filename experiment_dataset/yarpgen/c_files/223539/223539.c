/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223539
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223539 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223539
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_1] = (arr_2 [i_0] [i_1]);
                    arr_8 [3] [i_1] [i_2] = var_7;
                    var_16 = ((-(((arr_1 [i_1] [i_1 - 1]) ? var_13 : (arr_1 [i_1] [i_1 + 2])))));
                    var_17 = (((((((-(arr_3 [i_0] [i_0] [i_1]))) & (((942844773320380717 ? -24261 : (arr_1 [i_2] [i_1]))))))) ? ((((min((arr_2 [i_2] [i_2]), (arr_0 [i_0])))))) : var_4));
                }
            }
        }
    }
    var_18 = (max(var_1, (((var_13 & ((4294967290 ? var_8 : var_7)))))));
    var_19 ^= ((-(min((((var_1 ? var_15 : 6512850609819370170))), ((65536 ? 95 : 494818370323299824))))));
    var_20 = (min((((max(var_5, 268434944)))), 18446744073709551615));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                arr_17 [i_3] = ((-(arr_14 [i_3])));
                var_21 ^= ((((((((17 * (arr_9 [20])))) ? (((arr_11 [i_4]) ? 13 : var_5)) : (arr_12 [1])))) ? ((((arr_14 [16]) ? 4294967270 : var_9))) : (arr_10 [i_3])));
            }
        }
    }
    #pragma endscop
}
