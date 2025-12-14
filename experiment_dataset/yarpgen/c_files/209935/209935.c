/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209935
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -6;
    var_20 &= (min(var_17, (max(0, 18446744073709551615))));
    var_21 = (max(var_21, ((min((((((min(var_4, var_7))) ? (((2958753945 ? var_12 : var_6))) : ((0 ? var_4 : 1758289993))))), ((~(max(var_16, var_5)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_22 = -8376181246170390450;
                            var_23 = -6031425113187418464;
                            var_24 += ((((((((arr_8 [i_1] [i_1 + 1] [i_2] [i_1 + 1]) ? 1336213327 : 2062549627)) << (84 - 60)))) || var_13));
                        }
                    }
                }
                arr_9 [i_1] [15] [i_0] = ((+(max((arr_0 [i_1]), (arr_7 [i_0])))));
                var_25 ^= ((((max(((min(172, 1782))), (arr_2 [i_0] [i_1] [i_1])))) ? var_2 : (((((arr_4 [i_1 + 1]) + 9223372036854775807)) >> ((1 ? (arr_3 [i_0] [i_1 + 1] [i_1 + 1]) : 1))))));
                var_26 = var_13;
            }
        }
    }
    #pragma endscop
}
