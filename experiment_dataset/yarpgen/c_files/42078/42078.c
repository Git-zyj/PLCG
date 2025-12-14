/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_18 = (min(var_18, (arr_3 [i_1] [i_1] [i_1])));
                var_19 = -var_15;
                var_20 = var_9;
            }
        }
    }
    var_21 = ((var_13 ? (~var_0) : var_3));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_19 [13] [i_3] [i_3] [i_5] = (((1 != var_0) ? (((((max(var_3, (arr_18 [i_2] [i_3] [17] [i_5] [i_5] [2])))) ? 1 : (arr_16 [1] [i_4 + 1])))) : ((((min((arr_10 [i_2]), (arr_7 [i_5])))) * (((arr_10 [6]) ? var_0 : var_10))))));
                            var_22 ^= (((7 && 1910336339) == ((((min(18446744073709551589, (arr_16 [i_2] [i_4])))) ? ((((arr_16 [i_2] [21]) ? 234 : var_2))) : 0))));
                        }
                    }
                }
                var_23 -= ((((min((var_8 || 139611588448485376), ((var_13 ? 237 : var_11))))) ? 1 : ((((arr_17 [i_3] [i_3] [i_3] [i_2] [i_3] [i_3]) > (!var_16))))));
            }
        }
    }
    #pragma endscop
}
