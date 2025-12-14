/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 ^= (arr_3 [i_0]);

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_1] = 1;
                        var_21 = (-9223372036854775807 - 1);
                        arr_12 [i_0] [9] [1] [i_3 + 1] = (9223372036854775802 && var_14);
                        var_22 = ((arr_10 [i_3] [i_3 + 1] [i_2 - 4] [i_2 + 2]) ? 9223372036854775789 : (arr_10 [i_0] [i_3 - 1] [i_1] [i_2 - 3]));
                        arr_13 [i_0] [i_2 + 2] [i_1] [i_0] [i_0] = arr_1 [0] [i_0];
                    }
                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        var_23 |= ((-(~-9223372036854775802)));
                        arr_16 [i_2 - 2] [i_2 + 1] [i_2 - 3] [i_0] = ((((((-9223372036854775802 / -9223372036854775806) / (-2147483647 - 1)))) ? (~9223372036854775806) : ((max((arr_15 [11] [i_1] [i_2] [i_4] [i_4 - 2] [i_4]), var_13)))));
                        var_24 *= (((((!(((9223372036854775804 ? (arr_1 [i_0] [i_2 + 1]) : -2147483644)))))) - var_13));
                    }
                    var_25 = (-((-((-(arr_8 [i_0] [i_1] [i_0] [i_0]))))));
                    var_26 = (max(((-9223372036854775802 - (max(0, -9223372036854775799)))), ((min(-17523, var_13)))));
                    arr_17 [i_0] [i_1] [i_0] = ((-var_9 / ((-9223372036854775802 ? 9223372036854775802 : ((((arr_15 [i_0] [i_0] [1] [i_2 - 1] [i_2 - 3] [6]) ? 26916 : -11)))))));
                }
            }
        }
    }
    var_27 = (min(var_27, ((~(((((59980 ? (-9223372036854775807 - 1) : 211)) != (min(0, 11)))))))));
    #pragma endscop
}
