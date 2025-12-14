/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, -var_4));
                            var_20 ^= ((var_7 ? (var_16 != var_2) : (arr_6 [i_3] [i_3] [i_1] [i_3] [i_3] [i_0])));
                            arr_8 [i_0] [15] [i_2 - 2] [10] = ((((((arr_3 [i_0] [i_0]) ? 134217728 : (~4160749568)))) ? (((!(((8191 ? (arr_4 [12] [i_2] [i_3]) : 9223372036854775795)))))) : (((((4294967295 ? (arr_4 [i_1] [i_2] [i_3]) : var_14))) ? ((min(var_3, var_18))) : var_0))));
                            arr_9 [i_1] [i_2] = ((((((~1) > ((250 ? 0 : var_2))))) ^ 8388606));
                        }
                    }
                }
                var_21 ^= -var_13;
            }
        }
    }
    var_22 = ((((min(var_16, var_12))) ? 4160749556 : 8388606));
    var_23 = var_13;
    var_24 &= (min(var_9, ((((var_17 / 255) > ((min(4193792, var_0))))))));
    #pragma endscop
}
