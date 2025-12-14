/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34824
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_17 = (max(((-18992 ? 48957 : 41076)), ((var_8 ? (arr_3 [i_0] [i_1]) : 45))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_18 = ((42 ? (213 > 9) : ((57192 ? ((3231 ? 42 : 9223372036854775807)) : 0))));
                            var_19 ^= (69 | 116);
                            var_20 = (((((7353099132672965552 ? 12695 : 0))) ? (max(-7353099132672965565, var_12)) : ((((((var_8 ? (arr_3 [i_1] [i_0]) : (arr_7 [i_1])))) ? (((arr_7 [i_2]) ? var_12 : 1)) : (1 | 2109334138))))));
                            var_21 = (((((min(var_13, (arr_7 [2]))) < (((max(12695, (arr_2 [i_2]))))))) ? 2572774393 : ((63 ? var_15 : (arr_4 [i_3] [i_3] [i_3])))));
                            arr_9 [i_0] [i_1] [i_2] [i_3] = ((min(var_0, ((301518396 ? (-9223372036854775807 - 1) : 29060)))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (((max(((5966299670224251382 ? var_2 : 220)), ((1 ? 9223372036854775807 : 2548754983259637338)))) | (((min((max(var_1, 87)), var_8))))));
    var_23 = (40 * -18180);
    var_24 = ((98 + ((((min(0, -7015425376878651726))) ? 181 : (((-9223372036854775807 - 1) ? var_2 : -9461))))));
    #pragma endscop
}
