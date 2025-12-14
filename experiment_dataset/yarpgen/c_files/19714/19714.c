/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += (min(((-6366 ? (((var_1 ? var_8 : var_3))) : ((32767 ? 18446744073709551615 : -4515341784460740587)))), 18446744073709551615));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = (((((((var_9 ? 18446744073709551615 : 0))) && (arr_6 [i_3] [i_3 - 1]))) ? (((((~4294967295) < (((arr_5 [i_0] [i_0] [i_2] [i_3 + 1]) * (arr_4 [i_0] [i_0]))))))) : (min(26304, 0))));
                            var_11 += ((~((var_0 ? 255 : (((arr_1 [i_0]) & 0))))));
                            var_12 = (max(var_12, 26304));
                        }
                    }
                }
                var_13 = 255;
                var_14 = (((((((arr_9 [i_0] [i_0] [10] [i_1] [i_1]) || (arr_3 [i_0] [i_1]))))) && (arr_4 [i_0] [5])));
            }
        }
    }
    #pragma endscop
}
