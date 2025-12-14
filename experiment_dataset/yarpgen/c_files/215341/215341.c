/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215341
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            arr_4 [i_0] [2] = 2332876981;
            var_20 = arr_0 [i_0];
            var_21 = (((((var_17 ? 4294967295 : (arr_0 [i_0])))) ? ((0 ? -118 : 29456)) : 4));
            arr_5 [i_1] = (((((1 ? 30308 : var_19))) ? ((8 ? 9223372036854775801 : 2754594145)) : 31150));
        }
        var_22 = (max(var_22, ((((!12093) << (408244899 <= 38))))));
        var_23 = (((2972660957 % 248) ? (((arr_2 [i_0] [i_0]) ? var_19 : 2332876981)) : (((((arr_1 [i_0] [i_0]) == 238))))));
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_24 ^= (max(((-32750 ? var_19 : ((var_10 ? 9 : 2147483647)))), ((max(100, (arr_10 [i_3]))))));
                var_25 ^= ((9223372036854775808 ? ((-1004303786225161430 ? 28 : 4312)) : 87));
                var_26 = (max(var_26, ((((((((((arr_7 [i_3] [i_2]) ? 9484 : var_0))) ? (var_9 | 51121) : (((0 ? 168 : 3057553006)))))) ? 276439138 : (1 + -214))))));
                var_27 = (min(((((arr_7 [i_2] [i_2]) ? (15 + 2754594140) : (~var_8)))), (max(((2332877007 ? (arr_2 [i_2] [i_3]) : -9223372036854775807)), 4))));

                for (int i_4 = 2; i_4 < 9;i_4 += 1)
                {
                    var_28 = arr_10 [i_2];
                    arr_14 [i_4] [i_3] [i_2] = ((1792 ? (0 ^ 4) : var_4));
                }
            }
        }
    }
    #pragma endscop
}
