/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((155179682 << (var_1 - 1956543242))), ((((var_6 ? -1541152409 : 155179682))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_11 = 0;
                            arr_11 [i_0] [i_0] [i_1] [i_2] [12] [i_2] = ((((max(4294967295, -1571066060))) ? ((254 ? ((~(arr_5 [i_3] [i_2] [i_1]))) : (arr_2 [i_0]))) : ((((87 == (arr_8 [i_0] [i_0] [i_0] [i_0])))))));
                            var_12 = ((arr_1 [i_1] [i_1]) ? ((0 >> (arr_10 [i_3 + 2] [i_2] [i_2] [i_0]))) : (arr_10 [i_1] [i_2] [i_2 - 3] [12]));
                            var_13 = ((30 | (((-1059156152 ^ -32376) >> (571372107 - 571372107)))));
                            arr_12 [i_2] [7] [i_1] [i_2] = (arr_4 [i_0] [i_2] [i_3]);
                        }
                    }
                }
                var_14 = ((((-1 ? (arr_6 [i_1] [i_0] [i_0]) : var_6))) ? ((var_1 & (arr_6 [1] [i_0] [6]))) : ((var_8 ? (arr_6 [i_1] [i_0] [i_0]) : (arr_6 [i_0] [i_0] [0]))));
                var_15 += ((var_7 ? (((min(18, 35)) * ((((((((-2147483647 - 1) + 2147483647)) + 2147483647)) << (((arr_4 [i_0] [i_0] [i_0]) - 581))))))) : (((~(arr_7 [i_1] [i_1] [i_0] [i_1]))))));
            }
        }
    }
    var_16 = (((((var_0 ? var_5 : (((var_0 ? 1059156145 : -105)))))) && var_6));
    var_17 = var_2;
    var_18 = (((((((max(-2147483646, 1059156153))) ? (max(var_2, -25)) : (((min(var_4, var_7))))))) ? var_8 : ((var_9 << ((((var_6 ? 2147483646 : 1)) - 2147483622))))));
    #pragma endscop
}
