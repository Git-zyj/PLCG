/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24987
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_16 = (((var_10 / var_0) ? ((3213761881 - (arr_6 [i_3 + 1] [i_2 - 2] [i_1 + 3] [i_0 - 2]))) : (arr_6 [i_3 - 1] [i_2 - 2] [i_1 - 3] [i_0 + 1])));
                            var_17 ^= ((max(((arr_5 [2]), var_12))));
                            var_18 ^= (((((arr_6 [i_0] [i_0 - 4] [i_1 - 1] [i_3 - 3]) % -8127375968108518473))) ? (min(1148666193, ((6741 ? -4800581089161612941 : 6741)))) : ((((!((((var_3 + 9223372036854775807) >> (6727 - 6670)))))))));
                            var_19 += ((1821388790 ? -117 : (min(-127, 4481605402887903416))));
                            var_20 |= 27;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        {
                            var_21 += ((73 ? -29092 : (min(((7 << (((arr_7 [i_1] [i_1] [i_1] [i_1] [i_1]) - 102)))), ((min((arr_3 [i_0]), 4)))))));
                            var_22 = (arr_11 [i_5 - 1] [i_5] [1] [i_5] [i_5 - 1] [i_5]);
                            var_23 = -252849898;
                        }
                    }
                }
                var_24 = ((var_14 == (max((arr_7 [i_0 - 2] [i_1] [i_1 + 1] [i_0 - 1] [i_1 + 2]), 18446744073709551615))));
                var_25 += var_14;
            }
        }
    }
    #pragma endscop
}
