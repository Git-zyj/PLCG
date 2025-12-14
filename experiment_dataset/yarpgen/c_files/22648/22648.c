/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22648
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22648 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22648
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] [i_1] = (26485 >= -17348);

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        arr_12 [14] [i_1] [i_1] [i_1] = ((3416180208 ? (arr_7 [7] [i_1] [i_1]) : 65535));
                        arr_13 [i_0] [i_0] [i_0 + 1] [i_1] [i_0] [0] = (((arr_2 [i_1] [i_1] [i_3]) / (-6 != 1727009417)));
                        var_19 *= ((arr_11 [i_0] [i_0 + 3] [i_0 + 3] [i_2 - 2] [1] [i_3]) ? 248202449 : ((67 | (arr_8 [i_0] [i_1] [9] [15]))));
                        var_20 = (((arr_2 [i_0] [i_1] [i_2 + 2]) << (((arr_0 [i_0 + 2] [i_0]) - 3972331326331095670))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_21 = (((-127 - 1) ? ((max((((arr_4 [i_4] [i_2] [i_1]) ? 51 : -68)), ((max((arr_11 [i_0 - 1] [i_2] [i_2] [1] [18] [i_2]), 5494)))))) : (-9223372036854775807 - 1)));
                        arr_18 [i_1] [i_1] [2] [i_4] = (arr_7 [i_0] [i_1] [i_4]);
                    }
                }
            }
        }
    }
    var_22 = ((((((var_0 || 0) % (-54 && 2305843009213661184)))) ? ((536870912 ? -32351 : 18)) : ((((-1917364400 + 2147483647) << (45719 - 45719))))));
    var_23 = (min((32766 * -23), ((max((var_8 < -5904804807645263363), ((103 >> (350664152 - 350664147))))))));
    #pragma endscop
}
