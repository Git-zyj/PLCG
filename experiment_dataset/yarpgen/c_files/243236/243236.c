/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (1740417784 ^ var_5);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = ((~((520192 ? (arr_2 [i_0] [i_0]) : -1740417784))));
        var_22 += (arr_1 [i_0] [2]);
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        var_23 = (arr_0 [i_1]);
        var_24 = (min(var_24, 16458517890128346571));
        arr_5 [i_1] [8] = 96;
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 8;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_25 = (max((arr_6 [i_5] [i_2]), 1040076195));
                            var_26 = ((((arr_7 [8] [i_3 + 4]) <= 520193)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_27 = (~2305772640469516288);
                            var_28 = (max(((~(arr_18 [i_2]))), (arr_4 [i_2] [i_7])));
                        }
                    }
                }
                var_29 = (((arr_10 [i_2] [i_3 + 4]) ? ((~(~1040076195))) : (arr_21 [i_3])));
            }
        }
    }
    var_30 += (min((((max(8505788571545390386, 8505788571545390386)) ^ (520191 & var_1))), (~2801868240)));
    #pragma endscop
}
