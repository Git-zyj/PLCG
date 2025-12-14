/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;
    var_15 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                var_16 = (max(var_16, (!-var_1)));
                var_17 &= 23;
                arr_6 [i_0] = 0;
                var_18 = (max(var_18, var_3));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 4; i_3 < 17;i_3 += 1)
        {
            {
                var_19 |= ((~((~(arr_10 [i_3 - 2] [i_3 - 3])))));
                var_20 *= var_5;
            }
        }
    }
    #pragma endscop
}
