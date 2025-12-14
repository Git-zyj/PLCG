/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (-32767 - 1);
    var_13 = (min(((min((min(var_1, var_4)), (!var_4)))), (min((((var_10 - (-32767 - 1)))), ((var_0 ? var_9 : -9168059638204352125))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_14 = (max(var_14, (((((min((arr_3 [i_0 - 2]), var_11))) && var_1)))));
                    arr_9 [i_0] [4] [4] [i_0] = 8;
                    var_15 ^= (arr_1 [i_1]);
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_16 = 0;
                    arr_12 [i_0] [i_1] [i_0] [10] = ((-(((!(((6 ? var_7 : (arr_2 [i_0] [i_0])))))))));
                    var_17 = 18446744073709551605;
                }
                for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
                {
                    var_18 = ((~(((arr_13 [i_0 - 4] [11]) ? (arr_0 [i_0 - 4]) : (arr_0 [i_0 - 3])))));
                    var_19 = (+((var_3 ? 12 : (((arr_14 [i_4]) ? (arr_1 [1]) : 18446744073709551605)))));
                }
                var_20 = (min(var_20, -var_4));
            }
        }
    }
    var_21 = var_0;
    var_22 |= (!(min((!31666), (!var_9))));
    #pragma endscop
}
