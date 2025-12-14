/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= 1646363446;
    var_19 = ((((!((min(1646363437, 1646363445))))) ? var_9 : 4540933763378159451));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_20 ^= (((((((~1) + 2147483647)) >> (var_2 + 135))) < ((max(1740884764, (!var_12))))));
                var_21 -= ((((~(~22177))) / (arr_2 [i_0] [i_1 - 1])));
                var_22 = ((((((-1646363444 < var_16) <= -564528481))) <= var_12));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 18;i_5 += 1)
                    {
                        arr_14 [i_2] [i_3] [i_4] [i_2] [18] [i_2] |= (arr_10 [14] [i_3] [i_2]);
                        var_23 += (arr_4 [i_3] [11]);
                        arr_15 [i_2] [i_3] [i_3] [i_5] [i_5] [i_3] = (var_16 <= 2147483644);
                        arr_16 [i_3] [i_3] [i_4] = var_11;
                    }
                    var_24 = (((((16 - var_7) ? (((-(arr_13 [i_2] [i_3] [i_3] [i_3])))) : 5773214423677386549)) * 29168));
                    var_25 = (((80 ? 2147483637 : -97)));
                }
            }
        }
    }
    var_26 = 243;
    #pragma endscop
}
