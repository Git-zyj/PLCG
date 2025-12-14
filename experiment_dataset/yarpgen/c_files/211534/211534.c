/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    {
                        var_19 = 2384609100265160670;
                        var_20 = (min(var_20, (((21963 ? (max((~var_1), (max((arr_7 [8] [i_3] [i_3] [i_0]), 65535)))) : (((min(0, (7751359831090411812 == 10))))))))));
                        var_21 = 583948565699907545;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    arr_17 [i_0] [i_0] [4] [i_0] = (((((arr_10 [i_4] [i_4] [i_5] [i_0]) + var_18)) << (min(13, 56))));
                    arr_18 [6] [i_0] [i_4] [i_4] = ((0 + (55 ^ -57)));
                    arr_19 [i_5] [i_0] [i_4] = ((((!(arr_3 [i_0] [i_0]))) ? ((min(10695384242619139804, 4294967295))) : 1694));
                }
            }
        }
    }
    var_22 ^= (~((50 ? ((var_7 ? var_6 : 1099511627775)) : (((var_16 + 9223372036854775807) >> (var_18 - 4932))))));
    #pragma endscop
}
