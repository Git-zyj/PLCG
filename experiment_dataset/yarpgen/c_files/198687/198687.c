/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198687
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_15 = var_3;
                var_16 -= (((min((arr_2 [10] [i_0 - 1]), (arr_2 [3] [i_0 - 1])))) ? ((((((arr_1 [i_0]) ? 17025576462831392836 : (arr_0 [i_0] [i_1 + 3]))) <= var_3))) : 127);
                var_17 = (!-var_2);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            {
                var_18 = (!18512);
                var_19 = (max(var_19, (min(((~(arr_10 [i_2] [i_2]))), (((arr_8 [i_2]) & (arr_8 [i_3])))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                var_20 ^= (((min((arr_13 [i_4] [i_5] [i_5]), var_14)) >> 1));
                var_21 = var_1;
                var_22 = (arr_15 [i_5] [i_4] [i_4]);
                arr_16 [i_4] [i_5] = ((((min(var_14, (arr_12 [i_4])))) ? (((min((arr_12 [i_4]), 12314713806407415138)))) : ((var_4 ? ((var_3 * (arr_13 [i_4] [i_4] [i_5]))) : var_6))));
            }
        }
    }
    #pragma endscop
}
