/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218280
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = 0;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_13 = (arr_1 [i_0] [i_0]);

        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            var_14 *= 0;
            var_15 = (((((4294967295 * (arr_3 [i_0] [i_0] [i_0])))) && 0));
            var_16 = 14;
            var_17 *= 288230376084602880;
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_18 = 274877906943;
            var_19 = ((233 & (255 || 255)));
        }

        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            var_20 = (max(var_20, (arr_5 [i_0] [i_3] [i_3])));
            var_21 |= 274877906967;
            var_22 = 4294967295;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            var_23 |= ((235 >> (((arr_9 [i_0] [i_4]) - 3767397635))));
            var_24 ^= 18446743798831644666;
        }
        var_25 = (((arr_2 [i_0]) != (arr_10 [i_0] [i_0])));
    }
    var_26 = 1;
    #pragma endscop
}
